#pragma once
#include "Employee.h"
#include "Client.h"
#include "FilesHelper.h"
#include <vector>

class Admin : public Employee
{
    static int nextAdminID;

public:
    Admin(const string& name, const string& password, double salary);

    void display_info() const;
    void addClient(Client& client);
    Client* searchClient(int id);
    void listClient();
    void editClient(int id, string name, string password, double balance);
    void addEmployee(Employee& employee);
    Employee* searchEmployee(int id);
    void editEmployee(int id, string name, string password, double salary);
    void listEmployee();
};
