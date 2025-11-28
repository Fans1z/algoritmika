// №2 - 1 Задание

#include <iostream> // Программа которая для заданного значения "X" вычесляет значение выражения
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите x и y: ";
    cin >> x >> y;
    
    double result = exp(-x) - cos(x) + sin(2 * x * y);
    
    cout << "Результат: " << result;
    return 0;
}
