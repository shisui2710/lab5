#include <iostream>
#include "Complex.h"
#include "Vector.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "��� ������������� ������ Complex ������� 1" << endl;
	cout << "��� ������������� ������ Vector ������� 2" << endl;
	int i;
	cin >> i;
	switch (i)
	{
        case 1:
        {
            Complex obj1;
            cin >> obj1;
            cout << obj1;
            cout << ++obj1;
            cout << obj1--;
            Complex obj2;
            obj2 = obj1;
            cout << --obj2;
            break;
        }
        case 2:
        {
            Vector obj3;
            cin >> obj3;
            cout << obj3;
        }
	}
}
