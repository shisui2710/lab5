#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class Complex
{
	int x;
	int y;
public:
	Complex();
	Complex(int x1, int y1);
	Complex(const Complex &obj);

	void mod();
	void output();

    Complex& operator= (const Complex &obj);
	Complex& operator++ ();
	Complex& operator++ (int);
	Complex& operator-- ();
	Complex& operator-- (int);
	friend bool operator==(const Complex& obj1, const Complex &obj2);

	friend ostream& operator<<(ostream& out, const Complex &obj);
	friend istream& operator>>(istream& in, Complex &obj);

	~Complex();
};

#endif // COMPLEX_H_INCLUDED
