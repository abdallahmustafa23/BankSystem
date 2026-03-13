#pragma once
#include <iostream>
#include <string>

#include "DataSourceInterface.h"
#include "FilesHelper.h"

class FileManager : public DataSourceInterface {

public:
   
    static void addClient(const Client& obj);

    static void addEmployee(const Employee& obj);
     
    static void addAdmin(const Admin& obj);


    static void getAllClients();
     
    static void getAllEmployees();

    static void getAllAdmins();

    static void removeAllClients();

    static void removeAllEmployees();
           
    static void removeAllAdmins();

};



