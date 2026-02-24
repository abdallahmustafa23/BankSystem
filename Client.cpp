#include "Client.h"

Client::Client(const string& name, const string& password, double balance)
	: Person(name, password), balance(0)
{
	set_balance(balance);
}

bool Client::set_balance(double balance)
{
	if (Validation::is_valid_balance(balance)) {
		this->balance = balance;
		return true;
	}
	cout << "Invalid balance! Must be >= 1500\n";
	return false;
}

void Client::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		cout << "deposit successful\n";
	}
	else
	{
		cout << "Invalid deposit\n";
	}	
}

void Client::withdraw(double amount) {

	if (amount > 0 && amount <= balance) {
		balance -= amount;
		cout << "Withdraw successful\n";
	}
	else
	{
		cout << "Invalid withdraw\n";
	}	
}

void Client::transfar_to(Client& anothur, double amount) {

	if (amount > 0 && amount <= balance) {
		withdraw(amount);
		anothur.deposit(amount);
		cout << "Transfer successful\n";
	}
	else
	{
		cout << "Transfer failed\n";
	}
	
}
double Client::get_balance() const { return balance; }

void Client::check_balance()const {
	cout << balance;
}
void Client::display_info() const {

	cout << "Client ID: " << to_string(id) << "\nName: " << name << "\nbalance: " << to_string(balance);
}