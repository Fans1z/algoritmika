#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    
    // Ввод длин сторон
    cout << "Введите длины сторон треугольника:" << endl;
    cout << "Сторона a: ";
    cin >> a;
    cout << "Сторона b: ";
    cin >> b;
    cout << "Сторона c: ";
    cin >> c;
    
    // Проверка на существование треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Сортируем стороны по возрастанию
        double sides[3] = {a, b, c};
        sort(sides, sides + 3);
        
        // Проверяем теорему Пифагора
        double a2 = sides[0] * sides[0];
        double b2 = sides[1] * sides[1];
        double c2 = sides[2] * sides[2];
        
        // Проверка с точностью до 0.0001 для учета погрешности вычислений
        if (abs(a2 + b2 - c2) < 0.0001) {
            cout << "Треугольник является прямоугольным" << endl;
            cout << "Гипотенуза: " << sides[2] << endl;
            cout << "Катеты: " << sides[0] << " и " << sides[1] << endl;
        } else {
            cout << "Треугольник не является прямоугольным" << endl;
        }
        
        // Дополнительная информация
        cout << "\nДополнительная информация:" << endl;
        cout << "Стороны треугольника: " << a << ", " << b << ", " << c << endl;
        cout << "Квадраты сторон: " << a2 << ", " << b2 << ", " << c2 << endl;
        cout << "Сумма квадратов катетов: " << a2 + b2 << endl;
        cout << "Квадрат гипотенузы: " << c2 << endl;
        
    } else {
        cout << "Ошибка: Треугольник с такими сторонами не существует!" << endl;
    }
    
    return 0;
}