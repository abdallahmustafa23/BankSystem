#pragma once

#include "Employee.h"

using namespace std;

class Admin : public Employee
{
    static int nextAdminID;
public:
    Admin(const string& name, const string& password, double salary);
    Admin(int id, const string& name, const string& password, double salary);

    void display_info() const;

    void addClient(Client& client);

    Client searchClient(int id);

    void listClient();

    void editClient(int id, const string& name, const string& password, double balance);

    void addEmployee(Employee& employee);

    Employee searchEmployee(int id);

    void editEmployee(int id, const string& name, const string& password, double salary);

    void listEmployee();
};



