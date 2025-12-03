#include <iostream>
using namespace std;
void coolfunc (int &x)
{x =(x>=0)? x*2:-x; }
int main()
{
    int a;
    cout << "Введие значение a" << endl;
    cin >> a;
    coolfunc(a);
    cout << "a= " << a;
    return 0;
}