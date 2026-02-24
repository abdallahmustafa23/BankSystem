#include "Validation.h"
bool Validation::is_valid_name(const string& name) {
	if (name.length() < 5 || name.length() > 20) {
		return false;
	}
	for (int index = 0; index < name.length(); index++) {
		if (!((name[index] >= 'a' && name[index] <= 'z') || (name[index] >= 'A' && name[index] <= 'Z') || (name[index] == ' '))) {
			return false;
		}
	}
	return true;
}

bool Validation::is_valid_password(const string& password) {
	if (password.length() < 8 || password.length() > 20) {
		return false;
	}
	for (int index = 0; index < password.length(); index++) {
		if (password[index] == ' ') {
			return false;
		}
	}
	return true;
}

bool Validation::is_valid_balance(double balance) {
	if (balance < 1500) {
		return false;
	}
	return true;
}

bool Validation::is_valid_salary(double salary) {
	if (salary < 5000) {
		return false;
	}
	return true;
}
