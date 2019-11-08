#include <iostream>

using namespace std;

class complex { 
	private:
		int Re, Im;

	public:
		complex operator + (complex ob2);
		complex operator * (complex ob2);
		friend ostream &operator<<(ostream &stream, complex ob);
		friend istream &operator>>(istream &stream, complex &ob);
};

ostream &operator << (ostream &stream, complex ob){
	stream << ob.Re << "+i" << ob.Im;
	return stream;	
}

istream &operator >> (istream &stream, complex &ob){
	cout << endl << "Input Re: "; cin >> ob.Re;
	cout << "Input Im: "; cin >> ob.Im;

	return stream;
}

complex complex::operator + (complex ob2) {
	complex temp;
	temp.Re = Re + ob2.Re;
	temp.Im = Im + ob2.Im;

	return temp;
}

complex complex::operator * (complex ob2) {
	complex temp;
	temp.Re = Re * ob2.Re;
	temp.Im = Im * ob2.Im;

	return temp;
}

int main() {
	complex A, B, C;

	cin >> A >> B;

	C = A + B;

	cout << "SUM: " << A << " + " << B << "=" << C;

	return 0;
}