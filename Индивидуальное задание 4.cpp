#include <iostream>
using namespace std;
int f(int x) {
    return x % 10;
}

int main() {
    int a, b;
    cin >> a >> b;
    int z = f(a) +f(b);
    cout << z;
    return 0;
}