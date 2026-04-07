#include <iostream>
using namespace std;
/* В функцию в качестве параметров передаются динамический массив mas
и его размерность n */
void print (int *mas, int n)
{
    for (int i = 0; i < n; i++)
    cout << mas[i] << " \t";
}
int main()
{
    int n = 10;
    int *a = new int [n];
    for (int i = 0; i < n; i++)
    a[i] = i * i;
    print(a, 10);
    return 0;
}