#include <iostream>
#include <math.h>
using namespace std;

int fibonacci(int a)
{
    int b = 1, n = 0, c;
    for (int i = 0; i < a-2; i++)
    {
        c = n + b;
        n = b;
        b = c;
    }
    return b;
}
int main()
{
    int a;
    cin >> a;
    cout << fibonacci(a);
}