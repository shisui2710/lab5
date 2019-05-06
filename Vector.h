#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>
using namespace std;

class Vector
{
	int x;
	int y;
public:
	Vector();
	Vector(int x1, int y1);
	Vector(const Vector &obj);
	void output();

	Vector& operator= (const Vector &obj);
	friend bool operator== (const Vector& obj1, const Vector &obj2);
	friend ostream& operator<< (ostream& out, const Vector &obj);
	friend istream& operator>> (istream& in, Vector &obj);
	~Vector();
};

#endif // VECTOR_H_INCLUDED
