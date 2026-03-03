#include "Employee.h"

int Employee::nextEmployeeID = 0;

Employee::Employee(const string& name, const string& password, double salary)
    : Person(name, password)
{
    id = ++nextEmployeeID;
    set_salary(salary);
}

bool Employee::set_salary(double salary)
{
    if (Validation::is_valid_salary(salary))
    {
        this->salary = salary;
        return true;
    }

    cout << "Invalid salary! Must be >= 5000\n";
    return false;
}

double Employee::get_salary() const
{
    return salary;
}

void Employee::display_info() const
{
    cout << "Employee ID: " << id
         << "\nName: " << name
         << "\nSalary: " << salary << endl;
}

void Employee::addClient(Client& client)
{
    FilesHelper::saveClient(client);
    cout << "Client added successfully\n";
}

Client* Employee::searchClient(int id)
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].get_id() == id)
        {
            return &clients[i];
        }
    }

    return nullptr;
}

void Employee::listClients()
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        clients[i].display_info();
        cout << endl;
    }
}

void Employee::editClient(int id, string name, string password, double balance)
{
    vector<Client> clients = FilesHelper::getClients();
    bool found = false;

    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].get_id() == id)
        {
            clients[i].set_name(name);
            clients[i].set_password(password);
            clients[i].set_balance(balance);
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Client not found\n";
        return;
    }

    FilesHelper::clearFile("Clients.txt", "LastClientId.txt");

    for (int i = 0; i < clients.size(); i++)
    {
        FilesHelper::saveClient(clients[i]);
    }

    cout << "Client updated successfully\n";
}
