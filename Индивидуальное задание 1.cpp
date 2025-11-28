// №2 - 1 Задание

#include <iostream> // Программа которая для заданного значения "X" вычесляет значение выражения
#include <cmath>
using namespace std;

int main() {
    double x, y, result;
    cout << "Введите x и y: ";
    cin >> x >> y; // Приводит Х в У
    
    result = exp(-x) - cos(x) + sin(2 * x * y); // Делает уровнение и приводит результат
    
    cout << "Результат: " << result;
    return 0;
}
