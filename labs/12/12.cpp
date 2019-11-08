#include <iostream>

using namespace std;


class Product {
private:
	char *uid;
	double price, weight;
public:
	Product() {
		uid = new char[8];
	}

	~Product() {
		delete uid;
	}

	void Add() {
		cout << "Enter product data:" << endl;
		cout << "Price: ";
		cin >> price;
		cout << "Weight: ";
		cin >> weight;
		cout << "UID: ";
		cin >> uid;
	}

	void Print() {
		cout << "Product: " << endl;
		cout << "- UID: " << uid << endl;
		cout << "- Price: " << price << endl;
		cout << "- Weight: " << weight << endl;
		cout << "- Total: " << CalcTotal() << endl;
	}

	double CalcTotal() {
		return weight*price;
	}
};

int main() {
	Product p;

	p.Add();
	p.Print();

	return 0;
}