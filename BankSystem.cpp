#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Validation.h"
#include "Person.h"
#include "Client.h"
#include "Employee.h"	
#include "Admin.h"
#include "Parser.h"
#include "ClientManager.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "FileManager.h"
#include "ClientManager.h"
#include "EmployeeManager.h"
#include "AdminManager.h"
#include "Screens.h"
using namespace std;

int main() {
	
	if (FilesHelper::getAdmins().empty()) {
		Admin a("abdalla mustafa", "password12345", 10000);
		FilesHelper::saveAdmin(a); 
	}

	Screens::run_app();
	return 0;
}
