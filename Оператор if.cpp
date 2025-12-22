// использование оператора if, для проверки условия неопределенности функции
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float x,y;
cout << "Введите x " << endl;
cin >> x;
if (x==0 || x < -1) // проверка условия неопределенности функции
cout << "Функция не определена"<< endl;
else
    {
        y = 1/x+sqrt(x+1);
        cout<< "x = " << x << "\t" << "y = " << y << endl;
    }
return 0;
}