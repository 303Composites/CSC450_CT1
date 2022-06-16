#include<iostream>
#include <string>
#include <sstream>
#include <istream>

using namespace std;

int main() {
	//Declaring string variables
	string firstName;
	string lastName;
	string address;
	string zipcode;

	cout << "Enter your First Name:" << endl;
	//getline is used to gather user inputs for personal information
	getline(cin, firstName);
	cout << "Enter your Last Name:" << endl;
	getline(cin, lastName);
	cout << "Enter your Street Address:" << endl;
	getline(cin, address);
	cout << "Enter your Zip code:" << endl;
	getline(cin, zipcode);

	//displaying all entered personal information
	cout << "Personal Information:\n";
	cout << firstName + " " + lastName + "\n" + address + " " + zipcode << endl;

	return 0;

}
