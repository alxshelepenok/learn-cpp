#include <iostream>
#include <cmath>

using namespace std;

/**
 * Class Triangle provides the interface
 * for calculating area and perimeter of the triangle.
 */
class Triangle {
private:
	double aSide, bSide, cSide;
public:
	// Constructor
	AbstractTriangle(double a, double b, double c) {
		aSide = a;
		bSide = b;
		cSide = c;
	}

	// Method calcTrianglePerimeter return perimeter
	double calcTrianglePerimeter() {
		return aSide + bSide + cSide;
	}

	// Method calcTrianglePerimeter return area
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