#include "FilesHelper.h"

void FilesHelper::saveLast(const string& fileName, int id) {
    ofstream file(fileName, ios::out);
    file << id;
    file.close();
}
int FilesHelper::getLast(const string& fileName) {
    ifstream file(fileName, ios::in);
    int id = 0;
    file >> id;
    file.close();
    return id;
}

//id|name|password|balance , const string& fileName, const string& lastIdFile
void FilesHelper::saveClient(const Client& c) {

    ofstream file("Clients.txt", ios::app);

    file << c.get_id() << "|" << c.get_name() << "|" << c.get_password() << "|" << c.get_balance() << endl;

    file.close();

    saveLast("LastClientId.txt", c.get_id());
}

//id|name|password|salary
void FilesHelper::saveEmployee(const Employee& e, const string& fileName, const string& lastIdFile) {
    ofstream file(fileName, ios::app);
    file << e.get_id() << "|" << e.get_name() << "|" << e.get_password() << "|" << e.get_salary() << endl;
    file.close();
    saveLast(lastIdFile, e.get_id());
}

//id|name|password|salary
void FilesHelper::saveAdmin(const Admin& a, const string& fileName, const string& lastIdFile) {
    ofstream file(fileName, ios::app);
    file << a.get_id() << "|" << a.get_name() << "|" << a.get_password() << "|" << a.get_salary() << endl;
    file.close();
    saveLast(lastIdFile, a.get_id());
}


vector<Client> FilesHelper::getClients(const string& fileName) {
    ifstream file(fileName, ios::in);
    vector<Client> clients;
    string line;
    while (getline(file, line)) {
        Client client = Parser::parseToClient(line);
        clients.push_back(client);
    }
    return clients;
}

vector<Employee> FilesHelper::getEmployees(const string& fileName) {
    ifstream file(fileName, ios::in);
    vector<Employee> employees;
    string line;
    while (getline(file, line)) {
        Employee employee = Parser::parseToEmployee(line);
        employees.push_back(employee);
    }
    return employees;
}

vector<Admin> FilesHelper::getAdmins(const string& fileName) {
    ifstream file(fileName, ios::in);
    vector<Admin> admins;
    string line;
    while (getline(file, line)) {
        Admin admin = Parser::parseToAdmin(line);
        admins.push_back(admin);
    }
    return admins;
}


void FilesHelper::clearFile(const string& fileName, const string& lastIdFile) {
    ofstream(fileName, ios::out);
    ofstream(lastIdFile, ios::out);
}
