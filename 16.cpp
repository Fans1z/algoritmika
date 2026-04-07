#include <iostream>
#include <cmath>
// Составить программу, которая для заданого значения x вычесляет выражение sqrt(pow(x, 4) + sqrt(fabs(x + 1)))
using namespace std;

int main() 
{
    double x, result;
    
    cout << "Введите x: ";
    cin >> x;
    
    result = sqrt(pow(x, 4) + sqrt(fabs(x + 1)));
    
    cout << "Результат: " << result << endl;
    
    return 0;
}