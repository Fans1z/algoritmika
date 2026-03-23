//все четные числа из диапазона от A до B, кратные трем (A <= B)
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B;
    
    cout << "Введите A и B: ";
    cin >> A >> B;
    
    int first = ((A + 5) / 6) * 6;
    
    for (int i = first; i <= B; i += 6) 
    {
        cout << i <<  " ";
    }
    
    return 0;
}