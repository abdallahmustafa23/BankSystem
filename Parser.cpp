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

    return Client(stoi(data[0]), data[1], data[2], stod(data[3]));
}
//
// id|name|password|salary
Employee Parser::parseToEmployee(const string& line) {

    vector<string> data = split(line);

    return Employee(stoi(data[0]), data[1], data[2], stod(data[3]));
}

// id|name|password|salary
Admin Parser::parseToAdmin(const string& line) {

    vector<string> data = split(line);

    return Admin(stoi(data[0]), data[1], data[2], stod(data[3]));
}
