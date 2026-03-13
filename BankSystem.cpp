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
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "FileManager.h"
using namespace std;

int main() {

	Employee e1("abo baker", "jkkdffjdfdf", 45458);
	Employee e2("amojhamed", "jkkdffjdfdf", 45458);
	Employee e3(5, "azmey ayheb", "jkkdffjdfdf", 45458);
	Employee e4("abdalaa miustaf", "jkkdffjdfdf", 45458);
	cout << e4.get_id();


	Admin a("osama adle", "jfdkfdfd", 451210);

	Employee x("mohamed mustafa", "01120528351", 12000);
	Employee b(17, "omar osama", "01100hsfjsfd", 20000);
	Employee c("amer maged", "01129610576", 15000);
	a.addEmployee(x);
	a.addEmployee(b);
	a.addEmployee(c);
	try
	{
		Client y = a.searchClient(1);
		cout << y.get_name();
	}
	catch (...)
	{
		cout << "Client not found";
	}
	try
	{
		Employee y = a.searchEmployee(2);
		cout << y.get_name();
	}
	catch (...)
	{
		cout << "Employee not found";
	}
	a.listEmployee();

	a.editEmployee(18, "mohamed adel gamal", "12457854521", 14501452);


}














/*Employee e("osama adle", "jfdkfdfd", 451210);
Client a("mohamed btc eth", "01120528351", 12000);
Client b(17, "omar btc eth", "01100hsfjsfd", 20000);
Client c("amer btc eth", "01129610576", 15000);
e.addClient(a);
e.addClient(b);
e.addClient(c);
try
{
	Client c = e.searchClient(18);
	cout << c.get_name();
}
catch (...)
{
	cout << "Client not found";
}
e.listClients();

e.editClient(17, "azamy ehab", "12345678910", 12000000);*/








/*Client c("abdo sdsmustafa", "ksdsjdkdfdf", 12154);
Client a("mohamed btc eth", "01120528351", 12000);
Client b(17, "omar btc eth", "01100hsfjsfd", 20000);
Client c1("amer btc eth", "01129610576", 15000);

Employee e("ali sdsmustafa", "ksdsjdkdfdf", 12154);
Admin m("ahmed sdsmustafa", "ksdsjdkdfdf", 12154);
FileManager::removeAllClients();
FileManager::removeAllEmployees();
FileManager::removeAllAdmins();
FileManager::addClient(c);
FileManager::addClient(a);
FileManager::addClient(b);
FileManager::addClient(c1);
FileManager::addAdmin(m);
FileManager::addEmployee(e);
FileManager::getAllClients();
FileManager::getAllEmployees();
FileManager::getAllAdmins();
FileManager::removeAllClients();
FileManager::removeAllEmployees();
FileManager::removeAllAdmins();*/














/*Client a("mohamed btc eth", "01120528351", 12000);
Client b(17,"omar btc eth", "01100hsfjsfd", 20000);
Client c("amer btc eth", "01129610576", 15000);

FilesHelper::saveClient(a);
FilesHelper::saveClient(b);
FilesHelper::saveClient(c);

vector<Client> clients = FilesHelper::getClients();
for (const auto& a : clients) {
	cout << a.get_id() << "|" << a.get_name() << "|" << a.get_password() << "|" << a.get_balance() << endl;
}

Employee e1("abdalla omar", "dkfdkjfdf", 25000);
Employee e2("eslam hussein", "dkfdkjffgffgdf", 27000);

FilesHelper::saveEmployee(e1);
FilesHelper::saveEmployee(e2);

vector<Employee> employees = FilesHelper::getEmployees();
for (const auto& b : employees) {
	cout << b.get_id() << "|" << b.get_name() << "|" << b.get_password() << "|" << b.get_salary() << endl;
}

Admin a1(4, "noha ali", "fdifdjfdf", 14502);
Admin a2("amira ali", "flklkl,l,f", 1450542);
FilesHelper::saveAdmin(a1);
FilesHelper::saveAdmin(a2);

vector<Admin> admins = FilesHelper::getAdmins();
for (const auto& c : admins) {
	cout << c.get_id() << "|" << c.get_name() << "|" << c.get_password() << "|" << c.get_salary() << endl;
}
cout << FilesHelper::getLast("LastClientId.txt") << endl;
cout << FilesHelper::getLast("LastEmployeeId.txt") << endl;
cout << FilesHelper::getLast("LastAdminId.txt");

FilesHelper::clearFile("Clients.txt", "LastClientId.txt");
FilesHelper::clearFile("Employees.txt", "LastEmployeeId.txt");
FilesHelper::clearFile("Admins.txt", "LastAdminId.txt");*/













/*string data = "12|abdalla mustafa|12321412324|120000";
Client c = Parser::parseToClient(data);
cout << c.get_name() << endl;
c.display_info();

string data1 = "12|abdalla mustafa|12321412324|120000";
Employee e = Parser::parseToEmployee(data1);
cout << e.get_name() << endl;
e.display_info();

string data2 = "12|abdalla mustafa|12321412324|120000";
Admin a = Parser::parseToAdmin(data2);
cout << a.get_name() << endl;
a.display_info();*/








/*Parser p;
string line = "12|osama adle|515454012212|120000";
vector<string> token = p.split(line);
for (const auto& t : token) {
	cout << t << endl;
}*/









/*Client c1("osama adel", "0111245258asd", 12000);
Client c2("alaa mahmoud", "0111245258asd", 4000);
c1.check_balance();
c1.deposit(3000);
c1.withdraw(16000);
c1.check_balance();
c1.transfar_to(c2,2000);
c1.check_balance();
c2.check_balance();

Employee e1("abdalllah mustafa", "12154158454", 15000);
Employee e2("osama adle mohamed", "121546120", 20000);
Employee e3(7,"osama adle mohamed", "121546120", 20000);
Employee e4("osama adle mohamed", "121546120", 20000);
cout << e1.get_id() << endl << e2.get_id() << endl << e3.get_id()
	<< endl << e4.get_id();

Admin a1("mohamed adeel", "dfjdkfjdfd", 30000);
a1.display_info();*/












//template <typename Ty>
//struct NodeBST
//{
//	Ty data;
//	NodeBST* left, * right;
//
//	NodeBST(const Ty& data)
//		: data(data), left(nullptr), right(nullptr)
//	{
//	}
//};
//template<typename Ty>
//class BST
//{
//	using Node = NodeBST<Ty>;
//	using NodePtr = Node*;
//
//	NodePtr root;
//
//public:
//
//	class iterator {
//		NodePtr _pointer;
//
//	public:
//		iterator() : _pointer(nullptr) {}
//		iterator(NodePtr _pointer) : _pointer(_pointer) {}
//
//		const Ty& operator*() const { return _pointer->data; }
//	};
//
//
//	// Def. const.
//	BST() : root(nullptr) {}
//
//	bool empty() const { return (root == nullptr); }
//
//	pair<iterator, bool> insert(const Ty& val) {
//
//		if (empty()) {
//
//			root = new Node(val);
//			return;
//		}
//
//		auto ptr = root;
//
//		while (val != ptr->data) {
//
//			// Look right
//			if (val > ptr->data) {
//
//				if (ptr->right == nullptr) {
//
//					ptr->right = new Node(val);
//
//					return { iterator(ptr->right), true };
//				}
//				else ptr = ptr->right;// empty right
//			}
//
//			// Look left
//			else {
//
//				if (ptr->left == nullptr) {
//
//					ptr->left = new Node(val);
//
//					return { iterator(ptr->left), true };
//				}
//				else ptr = ptr->left;// empty left
//			}
//		}
//
//		// value is found!
//		return { iterator(ptr), false };
//	}
//
//	pair<iterator, bool> found(const Ty& val) {
//		if (empty()) {
//			return{ nullptr,false };
//		}
//		
//		auto ptr = root;
//		while (ptr != nullptr) {
//			if (val == ptr->data) {
//				return{ iterator(ptr),true };
//			}
//			else if (val > ptr->data) {
//
//				else ptr = ptr->right;
//			}
//			else {
//				ptr = ptr->left;				
//			}
//		}
//		return { iterator(nullptr), false };
//	}
//};