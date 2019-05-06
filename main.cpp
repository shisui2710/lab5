#include <iostream>
#include "Complex.h"
#include "Vector.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Для использования класса Complex введите 1" << endl;
	cout << "Для использования класса Vector введите 2" << endl;
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
