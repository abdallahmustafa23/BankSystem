#pragma once
#include "Person.h"

class Client : public Person {
private:
	double balance;
public:
	Client(const string& name, const string& password, double balance);

	bool set_balance(double balance);

	void deposit(double amount);

	void withdraw(double amount);

	void transfar_to(Client& anothur, double amount);
	double get_balance()const;
	void check_balance()const;
	void display_info() const;
};