#include "AdminManager.h"

void AdminManager::printEmployeeMenu()
{
    cout << "\n===== Admin Menu =====\n";
    cout << "1. Add Client\n";
    cout << "2. Search Client\n";
    cout << "3. List Clients\n";
    cout << "4. Edit Client\n";
    cout << "5. Add Employee\n";
    cout << "6. Search Employee\n";
    cout << "7. List Employees\n";
    cout << "8. Edit Employee\n";
    cout << "9. Logout\n";
}

Admin* AdminManager::login(int id, string password)
{
    vector<Admin> admins = FilesHelper::getAdmins();

    for (int i = 0; i < admins.size(); i++)
    {
        if (admins[i].get_id() == id && admins[i].get_password() == password)
        {
            return new Admin(admins[i]);
        }
    }

    cout << "Login Failed\n";
    return nullptr;
}

bool AdminManager::AdminOptions(Admin* admin)
{
    int choice;

    printEmployeeMenu();
    cin >> choice;

    if (choice == 1)
    {
        string name, password;
        double balance;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Password: ";
        cin >> password;

        cout << "Enter Balance: ";
        cin >> balance;

        Client c(name, password, balance);
        admin->addClient(c);
    }

    else if (choice == 2)
    {
        int id;
        cout << "Enter Client ID: ";
        cin >> id;

        Client c = admin->searchClient(id);
        c.display_info();
    }

    else if (choice == 3)
    {
        admin->listClient();
    }

    else if (choice == 4)
    {
        int id;
        string name, password;
        double balance;

        cout << "Enter Client ID: ";
        cin >> id;

        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Password: ";
        cin >> password;

        cout << "Enter New Balance: ";
        cin >> balance;

        admin->editClient(id, name, password, balance);
    }

    else if (choice == 5)
    {
        string name, password;
        double salary;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Password: ";
        cin >> password;

        cout << "Enter Salary: ";
        cin >> salary;

        Employee e(name, password, salary);
        admin->addEmployee(e);
    }

    else if (choice == 6)
    {
        int id;
        cout << "Enter Employee ID: ";
        cin >> id;

        Employee e = admin->searchEmployee(id);
        e.display_info();
    }

    else if (choice == 7)
    {
        admin->listEmployee();
    }

    else if (choice == 8)
    {
        int id;
        string name, password;
        double salary;

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Password: ";
        cin >> password;

        cout << "Enter New Salary: ";
        cin >> salary;

        admin->editEmployee(id, name, password, salary);
    }

    else if (choice == 9)
    {
        cout << "Logout \n";
        return false;
    }

    return true;
}
