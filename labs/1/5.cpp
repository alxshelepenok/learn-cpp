#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, result;

	x = 0.2;
	result = 0;

	while (x != 1) {
		result += tan(2*x) + sin(x);
		x += 0.2;
	}

	cout << "Result = " << result << endl;

	return 0;
}