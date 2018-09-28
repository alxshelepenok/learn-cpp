#include <iostream>
#include <cmath>

using namespace std;

/**
* Function computeFactorial return factorial of number.
*
* @param int num (number)
* @return long int (factorial)
*/
long int computeFactorial(int num) {
	long int factorial = 1;

	while(num != 0) {
		factorial *= num;
		num = num - 1;
	}

	return factorial;
}

int main() {
	int k;
	long int result;

	cout << "Enter value of `k`: ";
	cin >> k;

	if (k >= 9) {
		result = pow(k, 9);
	} else {
		result = computeFactorial(k);
	}

	cout << "Result = " << result << endl;

	return 0;
}