#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{ return pow(x,3) * pow(x,2) + x - 1; }
int main()
{ float a,b,c,z;
cout << "Введите a,b,c" << endl;
cin >> a >> b >> c;
z = f(2*a) + f(b+c);
cout << "z= " << z;
return 0;
}