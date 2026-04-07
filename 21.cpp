#include <iostream>
using namespace std;
/*Разработать функцию f(x), которая в трехзначном числе меняет местами первую с последней цифрой, а остальные числа оставляет без изменения. 
Продемонстрировать работу данной функции на примере.*/

int f(int x) 
{
    int first = x / 100;
    int middle = (x / 10) % 10;
    int last = x % 10;
    
    return last * 100 + middle * 10 + first;
}

int main() 
{
    int number;
    
    cout << "Введите трехзначное число: ";
    cin >> number;
    
    int result = f(number);
    
    cout << "Введенно: " << number << endl;
    cout << "С заменой: " << result << endl;
    
    return 0;
}