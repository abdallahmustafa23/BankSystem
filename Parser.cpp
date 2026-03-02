#include "Parser.h"



vector<string> Parser::split(const string& line) {
    vector<string> result;
    string token;
    stringstream ss(line);

    while (getline(ss, token, '|')) {
        result.push_back(token);
    }
    return result;
}

// id|name|password|balance
Client Parser::parseToClient(const string& line) {
    vector<string> data = split(line);    

    return Client(stoi(data[0]), data[1], data[2], stod(data[3]))
}

// id|name|password|salary
Employee Parser::parseToEmployee(const string& line) {
    vector<string> data = split(line);

    int id = stoi(data[0]);
    string name = data[1];
    string password = data[2];
    double salary = stod(data[3]);

    Employee e;
    e.set_id(id);
    e.set_name(name);
    e.set_password(password);
    e.set_salary(salary);

    return e;
}

// id|name|password|salary
Admin Parser::parseToAdmin(const string& line) {
    vector<string> data = split(line);

    int id = stoi(data[0]);
    string name = data[1];
    string password = data[2];
    double salary = stod(data[3]);

    Admin a;
    a.set_id(id);
    a.set_name(name);
    a.set_password(password);
    a.set_salary(salary);

    return a;
}