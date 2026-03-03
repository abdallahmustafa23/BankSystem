#include "Admin.h"


Admin::Admin(const string& name, const string& password, double salary)
    : Employee(name, password, salary)
{
    id = ++nextAdminID;
}
Admin::Admin(int id,const string& name, const string& password, double salary)
    : Employee(id,name, password, salary)
{
    if (id > nextAdminID)
    nextAdminID = id;
}

void Admin::display_info() const
{
    cout << "Admin ID: " << to_string(id) << "\nName: " << name << "\nSalary: " + to_string(salary);
}

int Admin::nextAdminID = 0;
