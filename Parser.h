#pragma once
#include<iostream>
#include<string>
#include <vector>
#include"Client.h"
#include "Employee.h"
#include "Admin.h"
#include <sstream>
using namespace std;

class Parser
{
public:
	static vector<string> split(const string& line);
	static Client parseToClient(const string& line);
	static Employee parseToEmployee(const string& line);
	static Admin parseToAdmin(const string& line);
};
