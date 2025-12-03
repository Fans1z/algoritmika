#include <iostream>
#include <cmath>
using namespace std;
float func(float r)
{ return 4/3 * 3,14 * pow(r,3); }
int main()
{ float r1, r2, r3, z;
cout << "Введите значения r1, r2, r3" << endl;
cin >> r1 >> r2 >> r3;
z = func(r1)+func(r2)+func(r3)/3;
cout << "z= " << z;
return 0;
}