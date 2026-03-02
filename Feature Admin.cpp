#include "Admin.h"

int Admin::nextAdminID = 0;

Admin::Admin(const string& name, const string& password, double salary)
    : Employee(name, password, salary)
{
    id = ++nextAdminID;
}

void Admin::display_info() const
{
    cout << "Admin ID: " << id
         << "\nName: " << name
         << "\nSalary: " << salary << endl;
}

void Admin::addClient(Client& client)
{
    FilesHelper::saveClient(client);
    cout << "Client added successfully\n";
}

Client* Admin::searchClient(int id)
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].get_id() == id)
        {
            return &clients[i];
        }
    }

    cout << "Client not found\n";
    return nullptr;
}

void Admin::listClient()
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        clients[i].display_info();
        cout << endl;
    }
}

void Admin::editClient(int id, string name, string password, double balance)
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

    for (Client& c : clients)
    {
        FilesHelper::saveClient(c);
    }

    cout << "Client updated successfully\n";
}

void Admin::addEmployee(Employee& employee)
{
    FilesHelper::saveEmployee(employee);
    cout << "Employee added successfully\n";
}

Employee* Admin::searchEmployee(int id)
{
    vector<Employee> employees = FilesHelper::getEmployees();

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].get_id() == id)
        {
            return &employees[i];
        }
    }

    cout << "Employee not found\n";
    return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary)
{
    vector<Employee> employees = FilesHelper::getEmployees();
    bool found = false;

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].get_id() == id)
        {
            employees[i].set_name(name);
            employees[i].set_password(password);
            employees[i].set_salary(salary);
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Employee not found\n";
        return;
    }

    FilesHelper::clearFile("Employees.txt", "LastEmployeeId.txt");

    for (Employee& e : employees)
    {
        FilesHelper::saveEmployee(e);
    }

    cout << "Employee updated successfully\n";
}

void Admin::listEmployee()
{
    vector<Employee> employees = FilesHelper::getEmployees();

    for (int i = 0; i < employees.size(); i++)
    {
        employees[i].display_info();
        cout << endl;
    }
}
