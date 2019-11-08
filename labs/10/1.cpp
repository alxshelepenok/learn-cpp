#include <iostream>

using namespace std;

class Fraction {
private:
	int a, b;
public:
	Fraction(int aa, int bb) {
		a = aa;
		b = bb;
	}

	Fraction operator + (Fraction fr) {
		Fraction tempFr(0, 0);
		tempFr.b = b;
		tempFr.a = a + fr.a;

		return tempFr;
	}

	void print() {
		cout << a << "/" << b;
	}
};

int main() {
	cout << "Введите аргументы для 1: ";
	int a1, b1;
	cin >> a1 >> b1;
	Fraction fr1(a1, b1);

	cout << "Введите аргументы для 2: ";
	int a2, b2;
	cin >> a2 >> b2;
	Fraction fr2(a2, b2);

	Fraction fr3(0, 0);

	fr3 = fr2 + fr1;

	fr3.print();

	return 0;
}