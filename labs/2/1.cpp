#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
	double aSide, bSide, cSide;
public:
	Triangle(double a, double b, double c) {
		aSide = a;
		bSide = b;
		cSide = c;
	}

	double calcTrianglePerimeter() {
		return aSide + bSide + cSide;
	}

	double calcTriangleArea() {
		double semiperimeter;

		semiperimeter = (aSide + bSide + cSide) / 2;

		return sqrt(semiperimeter * (semiperimeter - aSide) * (semiperimeter - bSide) * (semiperimeter - cSide));
	}
};

int main() {
	int a, b, c;

	cout << "Enter sides of the triangle: ";
	cin >> a >> b >> c;

	Triangle triangle(a, b, c); 

	cout << "Perimeter: " << triangle.calcTrianglePerimeter() << endl;
	cout << "Area: " << triangle.calcTriangleArea() << endl;

	return 0;
}