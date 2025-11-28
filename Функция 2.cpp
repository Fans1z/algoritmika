// №2 - 1 Задание

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y;
    
    // Ввод переменных
    cout << "Введите значение x: ";
    cin >> x;
    
    cout << "Введите значение y: ";
    cin >> y;
    
    // Вычисление выражения: e^(-x) - cos(x) + sin(2xy)
    double result = exp(-x) - cos(x) + sin(2 * x * y);
    
    // Вывод результата
    cout << "Результат вычисления e^(-x) - cos(x) + sin(2xy): " << endl;
    cout << "При x = " << fixed << setprecision(2) << x << ", y = " << y << endl;
    cout << "Результат = " << fixed << setprecision(6) << result << endl;
    
    return 0;

}
