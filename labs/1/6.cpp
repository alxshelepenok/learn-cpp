/*
* Натуральное число, в записи которого n цифр, называется числом Армстронга, если сумма его цифр,
* возведенная в степень n, равна самому числу. Вывести все числа Армстронга от 1 до K или сообщение об их отсутствии.
* Сумму цифр числа вычислять в функции.
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
* Function composeNumber return sum of a number;
*
* @param int num
* return int sum
*/
int composeNumber(int num) {
	int sum = 0;

	while (num != 0) {
		sum = sum + num % 10;
		num = num / 10;
	}

	return sum;
}

/*
* Function getCountDigits return count digits;
*
* @param int num
* return int count
*/
int getCountDigits(int num) {
	int count = 0;

	while (num != 0) {
		num = num / 10;
		count++;
	}

	return count;
}

int main() {
	int i, countDigits, limit, countArmstrongNumbers;

	cout << "Enter limit: ";
	cin >> limit;

	countArmstrongNumbers = 0;

	for (i = 1; i <= limit; i++) {
		countDigits = getCountDigits(i);
		if (pow(composeNumber(i), countDigits) == i) {
			cout << "Armstrong number #" << countArmstrongNumbers << ": " << i << endl;
			countArmstrongNumbers++;
		}
	}

	if (countArmstrongNumbers == 0) {
		cout << "Armstrong numbers not found." << endl;
	}

	return 0;
}