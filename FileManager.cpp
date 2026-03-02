#include "FileManager.h"

void FileManager::addClient(const Client& obj) {
    FilesHelper::saveClient(obj);
}

void FileManager::addEmployee(const Employee& obj) {
    FilesHelper::saveEmployee(obj);
}

void FileManager::addAdmin(const Admin& obj) {
    FilesHelper::saveAdmin(obj);
}



void FileManager::getAllClients() {
    vector<Client> v = FilesHelper::getClients();
    for (const Client& c : v) {
        cout << c.get_id() << "|" << c.get_name() << "|" << c.get_password() << "|" << c.get_balance() << endl;
    }
}

void FileManager::getAllEmployees() {
    vector<Employee> v = FilesHelper::getEmployees();
    for (const Employee& e : v) {
        cout << e.get_id() << "|" << e.get_name() << "|" << e.get_password() << "|" << e.get_salary() << endl;
    }
}

void FileManager::getAllAdmins() {
    vector<Admin> v = FilesHelper::getAdmins();
    for (const Admin& a : v) {
        cout << a.get_id() << "|" << a.get_name() << "|" << a.get_password() << "|" << a.get_salary() << endl;
    }
}



void FileManager::removeAllClients() {
    FilesHelper::clearFile("Clients.txt", "LastClientId.txt");
}

void FileManager::removeAllEmployees() {
    FilesHelper::clearFile("Employees.txt", "LastEmployeeId.txt");
}

void FileManager::removeAllAdmins() {
    FilesHelper::clearFile("Admins.txt", "LastAdminId.txt");
}
