#pragma once
#include "Employee.h"

class Admin : public Employee
{
   static int nextAdminID;
public:
    Admin(const string& name, const string& password, double salary);

    void display_info() const;
};