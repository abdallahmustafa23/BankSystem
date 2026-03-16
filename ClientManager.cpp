#include "ClientManager.h"

void ClientManager::printClientMenu()
{
	cout << "\n===== Client Menu =====\n";
	cout << "1. Update Password\n";
	cout << "2. Deposit\n";
	cout << "3. Withdraw\n";
	cout << "4. Check Balance\n";
	cout << "5. Logout\n";
	cout << "Enter choice: ";
}

void ClientManager::updatePassword(Person* person)
{
	string password;
	cout << "Enter new password: ";
	cin >> password;

	if (person->set_password(password))
	{
		cout << "Password Updated Successfully\n";
	}
	else
	{
		cout << "Invalid Password\n";
	}
}

Client* ClientManager::login(int id, string password)
{
	vector<Client> clients = FilesHelper::getClients();

	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i].get_id() == id && clients[i].get_password() == password)
		{
			return new Client(clients[i]);
		}
	}

	return nullptr;
}

bool ClientManager::clientOptions(Client* client)
{
	int choice;

	printClientMenu();
	cin >> choice;

	if (choice == 1)
	{
		updatePassword(client);
	}

	else if (choice == 2)
	{
		double amount;
		cout << "Enter amount: ";
		cin >> amount;
		client->deposit(amount);
	}

	else if (choice == 3)
	{
		double amount;
		cout << "Enter amount: ";
		cin >> amount;
		client->withdraw(amount);
	}

	else if (choice == 4)
	{
		client->check_balance();
	}

	else if (choice == 5)
	{
		return false;
	}

	return true;
}