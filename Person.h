#pragma once
#include "Validation.h"

class Person
{
protected:
	string name, password;
	static int nextID;
	int id;
public:
	Person(const string& name, const string& password);
	bool set_name(const string& name);
	bool set_password(const string& password);
	const string& get_name()const;
	const string& get_password()const;
	int get_id()const;
};