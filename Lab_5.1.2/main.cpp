#include <iostream>
#include <string>
using namespace std;


//Laboratory 5.1.2
class Square
{
private:
	double side;
	double area;
public:
	void setSide(double side) {
		if (side >= 0)
		{
			this->side = side;
			this->area = side * side;
		}
		else
		{
			cout << "Value less then 0!" << endl;
		}
	}
	void print() {
		cout << "Square: side=" << this->side << " area=" << this->area << endl << endl;
	}
};



int main() {

	Square a;

	a.setSide(4.);
	a.print();

	a.setSide(-33.2);
	a.print();

	a.setSide(0.);
	a.print();
}