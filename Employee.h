#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Client.h"
using namespace std;

class Employee : public Person
{
private:
    static int nextEmployeeID;

protected:
    double salary;

public:
    Employee(const string& name, const string& password, double salary);
    Employee(int id, const string& name, const string& password, double salary);

    bool set_salary(double salary);
    double get_salary() const;

    void display_info() const;

    void addClient(Client& client);

    Client searchClient(int id);

    void listClients();

    void editClient(int id, const string& name, const string& password, double balance);
};
