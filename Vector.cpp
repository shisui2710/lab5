#include "Vector.h"
#include <math.h>
using namespace std;


Vector::Vector()
{
	x = 0;
	y = 0;
}

Vector::Vector(int x1, int y1)
{
    x = x1;
	y = y1;
}

Vector::Vector(const Vector &obj)
{
	x = obj.x;
	y = obj.y;
}

Vector& Vector::operator= (const Vector &obj)
{
	x = num.x;
	y = num.y;
	return *this;
}

bool operator== (const Vector &obj1, const Vector &obj2)
{
	return (obj1.x == obj2.x) && (obj1.y == obj2.y);
}

ostream& operator<< (ostream& out, const Vector &obj)
{
	out << "Координаты вектора: ( " << obj2.x << ", " << obj2.y << ", " << obj2.z << ")" << endl;
	return out;
}

istream& operator>> (istream& in, Vector &obj)
{
	cout << "Введите координату x" << endl;
	in >> obj.x;
	cout << "Введите координату y" << endl;
	in >> obj.y;

	return in;
}

Vector::~Vector()
{

}

void Vector::output()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}
