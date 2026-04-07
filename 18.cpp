#include <iostream>
// Написать программу, которая высчитывает какая из цифр трехзначного числа больше: вторая или последняя
using namespace std;
int main()
{
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;
    bool isThreeDigit = (number >= 100 && number <= 999);
    cout << (isThreeDigit ? "" : "Ошибка! Введено не трехзначное число.") << endl;
    int secondDigit = (number/10) % 10;
    int lastDigit = number % 10;
    
    // Правильное сравнение тернарными операциями
    cout << (secondDigit == lastDigit? "Цифры равны":
            secondDigit > lastDigit? "Вторая цифра больше последней":
            "Последняя цифра больше второй") << endl;
    return 0;
}