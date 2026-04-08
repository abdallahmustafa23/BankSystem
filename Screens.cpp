#include "Screens.h"
 void Screens::bank_name() {
     cout << "===== Bank Misr =====\n";
 }

 void Screens::Welcome() {
     cout << "Welcome to our system!\n";
 }

 void Screens::login_options() {
     cout << "1. Admin\n";
     cout << "2. Employee\n";
     cout << "3. Client\n";
     cout << "0. Exit\n";
     cout << "Enter your choice: ";
 }

 int Screens::login_as() {
     int c;
     cin >> c;
     return c;
 }

 void Screens::invalid(int c) {
     cout << "Invalid choice: " << c << "\n\n";
 }

 void Screens::logout() {
     cout << "\nLogged out successfully\n\n";
 }

 void Screens::login_screen(int c) {
     if (c == 1) {
         int id;
         string pass;

         cout << "Admin ID: ";
         cin >> id;
         cout << "Password: ";
         cin >> pass;

         Admin* admin = AdminManager::login(id, pass);

         if (admin != nullptr) {
             AdminManager::AdminOptions(admin);
         }
         else {
             cout << "Invalid Admin Login\n";
         }
     }
     else if (c == 2) {
         int id;
         string pass;

         cout << "Employee ID: ";
         cin >> id;
         cout << "Password: ";
         cin >> pass;

         Employee* emp = EmployeeManager::login(id, pass);

         if (emp != nullptr) {
             EmployeeManager::employeeOptions(emp);
         }
         else {
             cout << "Invalid Employee Login\n";
         }
     }
     else if (c == 3) {
         int id;
         string pass;

         cout << "Client ID: ";
         cin >> id;
         cout << "Password: ";
         cin >> pass;

         Client* client = ClientManager::login(id, pass);

         if (client != nullptr) {
             ClientManager::clientOptions(client);
         }
         else {
             cout << "Invalid Client Login\n";
         }
     }
     else if (c == 0) {
         cout << "Goodbye ??\n";
         exit(0);
     }
     else {
         invalid(c);
     }
 }

 void Screens::run_app() {
    while (true) {
        Screens::bank_name();
        Screens::Welcome();
        Screens::login_options();
        int choice = Screens::login_as();
        Screens::login_screen(choice);
    }
}
