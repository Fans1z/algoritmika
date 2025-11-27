#include <iostream>
using namespace std;

void f(int *a)
{
    (*a)++;
}

int main()
{
    int x = 10;
    f(&x);
    return 0;
}