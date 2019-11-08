#include <iostream>
#include <string>

using namespace std;

class AbstractAddress {
	private:
		string city;
		string street;
		int home;
	public:
		AbstractAddress(string c, string s, int h) {
			city = c;
			street = s;
			home = h;
		}

		void edit(string c, string s, int h) {
			city = c;
			street = s;
			home = h;
		}

		void printAddress() {
			cout << "Address: " << endl;
			cout << "	City: " << city << endl;
			cout << "	Street: " << street << endl;
			cout << "	Home: " << home << endl;
		}
};

class PhysicalPerson: public AbstractAddress {
	private:
		string firstName;
		string lastName;
		string middleName;
		string passport;
	public:
		PhysicalPerson(string fn, string ln, string mn, string p):
		AbstractAddress(string c, string s, int h) {
			firstName = fn;
			middleName = mn;
			lastName = ln;
			passport = p;
		}

		void print() {
			cout << "Physical Person: " << endl;
			cout << "	First Name: " << firstName << endl;
			cout << "	Last Name: " << lastName << endl;
			cout << "	Middle Name: " << middleName << endl;
			cout << "	Passport: " << passport << endl;		

			printAddress();
		}
};

int main() {
	PhysicalPerson p(
		"First Name",
		"Last Name",
		"Middle Name",
		"Passport",
		"City",
		"Street",
		1
	);

	p.print();

	return 0;
}