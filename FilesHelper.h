#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Parser.h"
using namespace std;

class FilesHelper {
public:

    static void saveLast(const string& fileName, int id);


    static int getLast(const string& fileName);

    //id|name|password|balance
    static void saveClient(const Client& c);

    //id|name|password|salary
    static void saveEmployee(const Employee& e, const string& fileName = "Employees.txt", const string& lastIdFile = "LastEmployeeId.txt");

    //id|name|password|balance
    static void saveAdmin(const Admin& a, const string& fileName = "Admins.txt", const string& lastIdFile = "LastAdminId.txt");


    static vector<Client> getClients(const string& fileName = "Clients.txt");


    static vector<Employee> getEmployees(const string& fileName = "Employees.txt");

    static vector<Admin> getAdmins(const string& fileName = "Admins.txt");

    static void clearFile(const string& fileName, const string& lastIdFile);
};
