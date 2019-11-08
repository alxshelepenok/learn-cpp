// Templates

#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class Name {
private:
	T var;
public:
	void Enter();
	void Print();
};

template <typename T>
void Name<T>::Enter() {
	cout << "Enter variable";
	cin >> var;
}


template <typename T>
void Name<T>::Print() {
	cout << var << endl;
}


template <typename fType>
void printType(fType var) {
	cout << typeid(var).name() << endl;
}

int main() {
	Name <int> num;
	Name <char> cha;

	cout << "print char:" << endl;

	cha.Enter();
	cha.Print();

	cout << "print num:" << endl;

	num.Enter();
	num.Print();

	cout << "print type:" << endl;
	printType("a");
	printType("aa");
	printType(1);

	return 0;
}