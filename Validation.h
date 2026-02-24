#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation
{
public:
	static bool is_valid_name(const string& name);
	static bool is_valid_password(const string& password);
	static bool is_valid_balance(double balance);
	static bool is_valid_salary(double salary);
};