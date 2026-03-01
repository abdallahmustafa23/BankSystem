#pragma once
#include<iostream>
#include<string>
#include <vector>
#include"Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;

class Parser
{
public:
	static vector<string> split(string line);
	static Client parseToClient(string line);
	static Employee parseToEmployee(string line);
	static Admin parseToAdmin(string line);
};
