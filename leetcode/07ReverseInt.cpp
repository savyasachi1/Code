#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int ans = 0;
    int i = 0;
    while (x != 0)
    {
        if (ans < (pow(-2, 31)/10) || ans > (pow(2, 31) - 1)/10)
        {
            ans = 0;
            break;
        }
        int digit = x % 10;
        ans = (ans * 10) + digit;
        cout << "step-" << i << "  " << ans << endl;
        x = x / 10;
        i++;
    }
    // ans=-2147483648;

    cout << ans << endl;
}