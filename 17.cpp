#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x, result;
    
    cout << "Введите x: ";
    cin >> x;
    
    result = fabs(pow(x, 3) - pow(x, 2)) - (7 * x) / (pow(x, 3) - 15 * x);
    
    cout << "Результат: " << result << endl;
    
    return 0;
}