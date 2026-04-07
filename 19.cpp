#include <iostream>
#include <cmath>
/* Написать программу, которая подсчитывает площадь равностороннего треугольника, периметр которого равен p */
using namespace std;
int main() 
{
    double p, a;
    double S;
    cout << "Введите периметр треугольника ";
    cin >> p;
    a = p / 3;
    S = pow(a, 2) * sqrt(3.0) / 4.0;
    cout << "Площадь треугольника равна " << S << endl;
    return 0;
}