#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float x,y;
cout << "Введите x " << endl;
cin >> x;
if ((x=0) && (x>=-1)) // определение f
{
    y=1/x+ sqrt (x+1);
    cout << "x = " << x << "/t" << y << endl;
}
else
cout << "Функция не определена";
return 0;
}