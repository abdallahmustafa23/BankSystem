#include "EmployeeManager.h"

void EmployeeManager::printEmployeeMenu() {
    cout << "\n===== Employee Menu =====\n";
    cout << "1. Add New Client\n";
    cout << "2. List All Clients\n";
    cout << "3. Search For Client\n";
    cout << "4. Edit Client Info\n";
    cout << "5. Logout\n";
}

void EmployeeManager::newClient(Employee* employee) {
    cout << "Add new client\n";
}

void EmployeeManager::listAllClients(Employee* employee) {
    cout << "List all clients\n";
}

void EmployeeManager::searchForClient(Employee* employee) {
    int id;
    cout << "Enter client ID: ";
    cin >> id;
    cout << "Searching for client...\n";
}

void EmployeeManager::editClientInfo(Employee* employee) {
    int id;
    cout << "Enter client ID to edit: ";
    cin >> id;
    cout << "Editing client info...\n";
}

Employee* EmployeeManager::login(int id, string password) {
    cout << "Login process\n";
    return nullptr;
}

bool EmployeeManager::employeeOptions(Employee* employee) {
    int choice;
    printEmployeeMenu();
    cout << "Choose: ";
    cin >> choice;

    switch (choice) {
    case 1:
        newClient(employee);
        break;
    case 2:
        listAllClients(employee);
        break;
    case 3:
        searchForClient(employee);
        break;
    case 4:
        editClientInfo(employee);
        break;
    case 5:
        return false;
    }

    return true;
}
