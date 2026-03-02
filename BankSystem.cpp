#include <iostream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main()
{
	FileManager fm;
	Client c1("Abdallah mustafa", "abdo1234", 12000);
	Client c2("Mohamed mustafa", "abdo1234", 12000);
	fm.addClient(c1);
	fm.addClient(c2);

	fm.getAllClients();
}

