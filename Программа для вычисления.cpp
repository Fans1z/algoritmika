#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    // Ввод координат вершин
    cout << "Введите координаты первой вершины (x1 y1): ";
    cin >> x1 >> y1;
    
    cout << "Введите координаты второй вершины (x2 y2): ";
    cin >> x2 >> y2;
    
    cout << "Введите координаты третьей вершины (x3 y3): ";
    cin >> x3 >> y3;
    
    // Вычисление длин сторон
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // сторона между вершинами 1 и 2
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)); // сторона между вершинами 2 и 3
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); // сторона между вершинами 3 и 1
    
    // Вычисление полупериметра
    double p = (a + b + c) / 2;
    
    // Вычисление площади по формуле Герона
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    // Вывод результатов
    cout << fixed << setprecision(2);
    cout << "\nРезультаты вычислений:" << endl;
    cout << "Длина стороны a: " << a << endl;
    cout << "Длина стороны b: " << b << endl;
    cout << "Длина стороны c: " << c << endl;
    cout << "Полупериметр: " << p << endl;
    cout << "Площадь треугольника: " << area << endl;
    
    return 0;
}