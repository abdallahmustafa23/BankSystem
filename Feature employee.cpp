#include "Employee.h"

void Employee::addClient(Client& client)
{
    FilesHelper::saveClient(client);
    cout << "Client added successfully\n";
}

void Employee::searchClient(int id)
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].get_id() == id)
        {
            clients[i].display_info();
            return;
        }
    }

    cout << "Client not found\n";
}

void Employee::listClients()
{
    vector<Client> clients = FilesHelper::getClients();

    for (int i = 0; i < clients.size(); i++)
    {
        clients[i].display_info();
        cout << endl;
    }
}

void Employee::editClient(int id, string name, string password, double balance)
{
    vector<Client> clients = FilesHelper::getClients();
    bool found = false;

    for (int i = 0; i < clients.size(); i++)
    {
        if (clients[i].get_id() == id)
        {
            clients[i].set_name(name);
            clients[i].set_password(password);
            clients[i].set_balance(balance);
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Client not found\n";
        return;
    }

    FilesHelper::clearFile("Clients.txt", "LastClientId.txt");

    for (int i = 0; i < clients.size(); i++)
    {
        FilesHelper::saveClient(clients[i]);
    }

    cout << "Client updated successfully\n";
};
