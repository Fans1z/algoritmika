#include <iostream>
using namespace std;

int main()
{
    int x, y, max;
    cin >> x >> y;
    (x > y) ? cout << x : cout << y; // 1
    cout << endl;
    max = (x > y) ? x : y; // 2
    cout << max << endl;
    return 0;
}