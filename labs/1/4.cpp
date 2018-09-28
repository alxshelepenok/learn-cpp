#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, count, sum;
	double result;

	cout << "Enter value of `n`: ";
	cin >> n;

	sum = 0;
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
		count++;
	}

	result = double(sum) / count;
	cout << "Result = " << result << endl;

	return 0;
}