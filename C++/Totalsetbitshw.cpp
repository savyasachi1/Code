#include <iostream>
#include <math.h>
using namespace std;

int count(int a)
{
    int count = 0;
    while (a != 0)
    {
        int bit = a & 1;
        // if(a&1)
        if (bit==1)
        {
            count++;
        }
        a= a >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = count(a) + count(b);
    cout<<ans<<endl;
}