#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, d;
	double x1, x2;

    cout << "Enter a, b, c for ax^2 + bx + c = 0: " << endl;
    cin >> a >> b >> c;

	d = b*b - 4*a*c;

	if (d > 0) {
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		cout << "Root X1 " << x1 << endl << "Root X2 " << x2 << endl;

	} else if (d == 0) {
		x1 = -b/(2*a);
		cout << "Root X1 " << x1 << endl;

	} else if (d < 0) {
		cout << "The equation " << a << "x^2 + " << b << "x + " << c << " = 0 does not have roots." << endl;
	}

    return 0;
}