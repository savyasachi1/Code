#include <iostream>
#include <math.h>
using namespace std;

int dectobin(int n)
{
    int bit = 0, i = 0;
    float ans = 0;
    while (n != 0)
    {
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n=n>>1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        n = n * (-1);
    }
    int a=dectobin(n);
    cout<<a<<endl;
    float b= ( ~ a);
    float c= b+ 1;
    cout<<b<<endl<<c<<endl;


}