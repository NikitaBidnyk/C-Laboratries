#include <iostream>
#include <string>
using namespace std;

//Laboratory 5.1.3
class AdHocSquare
{
public:

	void set_side(double side) {
		this->side = side;
	}
	double get_area() {
		return side * side;
	}
private:
	double side;
};


class LazySquare
{
public:
	void set_side(double side) {
		this->side = side;
	}
	double get_area() {
		if (side_changed)
		{
			this->area = side * side;
			return area;
		}
		else {
			return NULL;

		}
	}
	void sideChange(bool change) {
		this->side_changed = change;
	}
private:
	double side;
	double area;
	bool side_changed;
};

int main()
{

	AdHocSquare ad;
	ad.set_side(4.0);
	cout << "Area of AdHocSquare: " << ad.get_area() << endl;

	LazySquare lazy;
	lazy.set_side(6.0);
	lazy.sideChange(true);//change on true
	cout << "Area of LazySquare(true): " << lazy.get_area() << endl;

	LazySquare lazy2;
	lazy.set_side(7.0);
	lazy.sideChange(false);//change on false
	cout << "Area of LazySquare(false): " << lazy.get_area() << endl;
	return 0;

}