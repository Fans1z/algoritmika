#include <iostream>
#include <string>
using namespace std;
/* Дана сторона квадрата. С помощью одной функции вычислить его периметр p и площадь S. Определить, что у данного квадрата >, p или S */

void func(float x, float &p, float &S)
{
    p = 4 * x;
    S = x * x;
}

int main()
{
    float x, p, S;
    cout << "Введите длину стороны квадрата: ";
    cin >> x;
    func(x, p, S);
    cout << "Периметр равен " << p << endl;
    cout << "Площадь равна " << S << endl;
    string result = (p > S) ? "Периметр больше" : (S > p) ? "Площадь больше" : "Периметр = Площади";
    cout << "Результат: " << result << endl;
    return 0;
}