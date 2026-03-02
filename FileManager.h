#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"

class FileManager : public DataSourceInterface {

public:

    void addClient(const Client& obj);
    void addEmployee(const Employee& obj) ;
    void addAdmin(const Admin& obj) ;


    void getAllClients() ;
    void getAllEmployees() ;
    void getAllAdmins() ;


    void removeAllClients() ;
    void removeAllEmployees() ;
    void removeAllAdmins() ;

};

