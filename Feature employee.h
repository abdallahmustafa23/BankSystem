#pragma once
#include "Person.h"
#include "Client.h"
#include "FilesHelper.h"
#include <vector>
#include <iostream>
using namespace std;

class Employee : public Person
{
private:
    static int nextEmployeeID;
    double salary;

public:
    Employee(const string& name, const string& password, double salary);

    bool set_salary(double salary);
    double get_salary() const;
    void display_info() const;

    void addClient(Client& client);
    void searchClient(int id);
    void listClients();
    void editClient(int id, string name, string password, double balance);
};
