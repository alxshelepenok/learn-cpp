#include <iostream>

using namespace std;

class Triangle {
private:
	int ab;
	int ac;
	int bc;
public:
	void enter() {
		cout << "Enter sides(ab, ac, bc): ";
		cin >> ab >> ac >> bc;
	}

	void show() {
		cout << "Ok! Triangle with sides - ab:" << ab << " ac:" << ac << " bc:" << bc << endl;
	}

	double calcPerimeter() {
		return ab+ac+bc;
	}
};

int main() {
	Treeangle T;

	T.enter();
	T.show();

	cout << "Perimeter: " << T.calcPerimeter() << endl;

	return 0;
}