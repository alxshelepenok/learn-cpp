#include <iostream>

using namespace std;

double randDouble(double min, double max) {
	return (double)(rand()) / RAND_MAX * (max - min) + min;
}

class Array {
private:
	int length;
	double *array;
	double average;
	
public:
	Array(int l) {
		length = l;
		array = new double[length];

		for (int i = 0; i <= length; i++) {
			array[i] = randDouble(1, 100);
		}
	}

	~Array() {
		delete array;
	}

	void printArray() {
		for (int i = 0; i <= length; i++) {
			cout << " " << array[i];
		}		
	}

	void calcAverage() {
		double sum = 0;

		for (int i = 0; i <= length; i++) {
			sum += array[i];
		}

		average = sum/length;
	}

	void transformArray() {
		calcAverage();

		for (int i = 0; i <= length; i++) {
			array[i] = array[i] - average;
		}
	}
};

int main() {
	int length;

	cout << "Enter length of Array: ";
	cin >> length;

	Array array(length);

	cout << "Source array: [ ";
	array.printArray();
	cout << " ]" << endl;

	array.transformArray();

	cout << "Transfrom array: [ ";
	array.printArray();
	cout << " ]" << endl;

	return 0;
}