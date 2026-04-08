#pragma once
#include "ClientManager.h"
#include "EmployeeManager.h"
#include "AdminManager.h"
using namespace std;
class Screens
{
public:

	static void bank_name();

	static void Welcome();

	static void login_options();

	static int login_as();

	static void invalid(int c);

	static void logout();

	static void login_screen(int c);

    static void run_app();
};
