#include "Complex.h"
#include <math.h>

using namespace std;

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(int x1, int y1)
{
	x = x1;
	y = y1;
}
Complex::Complex(const Complex &obj)
{
	x = obj.x;
	y = obj.y;
}

void Complex::mod()
{
	float a = sqrt(x * x + y * y);
	cout << "Модуль комплексного числа: " << a;
}

void Complex::output()
{
	cout << "Комплексное число: (" << x << " + " << y << "i " << endl << endl;
}

Complex& Complex::operator= (const Complex &obj)
{
	x = num.x;
	y = num.y;
	return *this;
}

Complex& Complex::operator++ ()
{
	++x;
	++y;


	return *this;
}

Complex& Complex::operator++ (int)
{
	Complex old;
	old.x = x;
	old.y = y;

	x++;
	y++;
	return old;
}

Complex& Complex::operator-- ()
{
	--x;
	--y;
	return *this;
}

Complex& Complex::operator-- (int)
{
	Complex old;
	old.x = x;
	old.y = y;

	x--;
	y--;
	return old;
}

bool operator== (const Complex &obj1, const Complex &obj2)
{
	return (obj1.x == obj2.x) && (obj1.y == obj2.y);
}

ostream& operator<< (ostream &obj1,const Complex &obj2)
{
	out << obj.x << " + (" << obj.y << ")i" << endl;
	return out;
}

istream& operator>> (istream& in, Complex &obj)
{
	cout << "" << endl;
	in >> obj.x;
	cout << "" << endl;
	in >> obj.y;
	return in;


Complex::~Complex()
{

}
