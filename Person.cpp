#include "Person.h"


Person::Person(const string& name, const string& password) :name("no_name"), password("no_password")
{
	set_name(name);
	set_password(password);
	id = ++nextID;
}

bool Person::set_name(const string& name) {
	if (Validation::is_valid_name(name)) {
		this->name = name;
		return true;
	}
	else {
		cout << "Invalid name! Try again.\n";
		return false;
	}
}

bool Person::set_password(const string& password) {
	if (Validation::is_valid_password(password)) {
		this->password = password;
		return true;
	}
	else {
		cout << "Invalid password! Try again.\n";
		return false;
	}
}

const string& Person::get_name() const { return name; }
const string& Person::get_password() const { return password; }
int Person::get_id() const { return id; }
int Person::nextID = 0;