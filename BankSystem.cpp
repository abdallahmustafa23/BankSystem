#include <iostream>
#include <string>
#include "Validation.h"
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

using namespace std;

int main()
{
	Client c("abdo", "01120", 12000);	
	c.check_balance();
}

