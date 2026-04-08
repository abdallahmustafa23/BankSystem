#include "EmployeeManager.h"
#include "FilesHelper.h"

void EmployeeManager::printEmployeeMenu()
{
    cout << "\n===== Employee Menu =====\n";
    cout << "1. Add Client\n";
    cout << "2. Search Client\n";
    cout << "3. List Clients\n";
    cout << "4. Edit Client\n";
    cout << "5. Logout\n";
}

void EmployeeManager::newClient(Employee* employee)
{
    string name, password;
    double balance;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Password: ";
    getline(cin, password);

    cout << "Enter Balance: ";
    cin >> balance;

    Client c(name, password, balance);
    employee->addClient(c);
}

void EmployeeManager::listAllClients(Employee* employee)
{
    employee->listClients();
}

void EmployeeManager::searchForClient(Employee* employee)
{
    int id;
    cout << "Enter Client ID: ";
    cin >> id;

    Client c = employee->searchClient(id);
    c.display_info();
}

void EmployeeManager::editClientInfo(Employee* employee)
{
    int id;
    string name, password;
    double balance;

    cout << "Enter Client ID: ";
    cin >> id;

    cout << "Enter New Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter New Password: ";
    getline(cin, password);

    cout << "Enter New Balance: ";
    cin >> balance;

    employee->editClient(id, name, password, balance);
}

Employee* EmployeeManager::login(int id, string password)
{
    vector<Employee> employees = FilesHelper::getEmployees();

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].get_id() == id && employees[i].get_password() == password)
        {
            return new Employee(employees[i]);
        }
    }

    cout << "Login Failed\n";
    return nullptr;
}

bool EmployeeManager::employeeOptions(Employee* employee)
{
    int choice;

    printEmployeeMenu();
    cin >> choice;

    if (choice == 1)
        newClient(employee);

    else if (choice == 2)
        searchForClient(employee);

    else if (choice == 3)
        listAllClients(employee);

    else if (choice == 4)
        editClientInfo(employee);

    else if (choice == 5)
    {
        cout << "Logout\n";
        return false;
    }

    return true;
}
