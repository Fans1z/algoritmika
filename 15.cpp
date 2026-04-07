#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x, result;
    
    cout << "Введите x: ";
    cin >> x;
    
    result = (x*x + sin(x + 1)) / 25;
    
    cout << "Результат: " << result << endl;
    
    return 0;
}