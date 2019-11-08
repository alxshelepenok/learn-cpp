#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
	double radius;
public:
	void enter() {
		cout << "Enter radius: ";
		cin >> radius;
	}

	void show() {
		cout << "Ok! Circle with radius = " << radius << endl;
	}

	double calcLength() {
		double length = 2*M_PI*radius;
		return length;
	}
};

int main() {
	Circle C;

	C.enter();
	C.show();

	cout << "Length of this circle: " << C.calcLength() << endl;

	return 0;
}