#include <iostream>

using namespace std;

/**
 * Function randDouble return random number.
 */
double randDouble(double min, double max) {
	return (double)(rand()) / RAND_MAX * (max - min) + min;
}

/**
 * Class Array provides the interface for array manipulation.
 */
class Array {
private:
	int length;
	double *array;
	double average;
	
public:

	// Constructor
	Array(int l) {
		length = l;
		array = new double[length];

		for (int i = 0; i <= length; i++) {
			array[i] = randDouble(1, 100);
		}
	}

	// Destructor
	~Array() {
		delete array;
	}

	// Method printArray print all element of Array.
	void printArray() {
		for (int i = 0; i <= length; i++) {
			cout << " " << array[i];
		}		
	}

	// Method calcAverage calc average elements of Array.
	void calcAverage() {
		double sum = 0;

		for (int i = 0; i <= length; i++) {
			sum += array[i];
		}

		average = sum/length;
	}

	// Method transformArray transform source array.
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