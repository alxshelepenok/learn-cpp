#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double result, x;

	cout << "Enter value of `n`: ";
	cin >> n;

	cout << "Enter value of `x`: ";
	cin >> x;

	result = 0;

	while (n != 0) {
		result += n*pow(x, n);
		n = n - 1;
	}

	cout << "Result = " << result << endl;

	return 0;
}