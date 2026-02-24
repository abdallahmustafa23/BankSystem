#pragma once
#include "Employee.h"

class Admin : public Employee
{
public:
    Admin(const string& name, const string& password, double salary);

    void display_info() const;
};