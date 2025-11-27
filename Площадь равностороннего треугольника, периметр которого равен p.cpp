#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double p;
    
    // Ввод периметра
    cout << "Введите периметр равностороннего треугольника: ";
    cin >> p;
    
    // Вычисление стороны треугольника
    double side = p / 3;
    
    // Вычисление площади по формуле S = (a²√3)/4
    double area = (side * side * sqrt(3)) / 4;
    
    // Вывод результата
    cout << "Сторона треугольника: " << fixed << setprecision(2) << side << endl;
    cout << "Площадь треугольника: " << fixed << setprecision(2) << area << endl;
    
    return 0;
}