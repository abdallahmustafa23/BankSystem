#include "Employee.h"


Employee::Employee(const string& name, const string& password, double salary)
    : Person(name, password), salary{}
{
    set_salary(salary);
}

bool Employee::set_salary(double salary)
{
    if (Validation::is_valid_salary(salary)) {
        this->salary = salary;
        return true;
    }
    cout << "Invalid salary! Must be >= 5000\n";
    return false;
}

double Employee::get_salary() const {
    return salary;
}

void Employee::display_info() const
{
    cout << "Employee ID: " << to_string(id) << "\nName: " + name << "\nSalary: " << to_string(salary);

}