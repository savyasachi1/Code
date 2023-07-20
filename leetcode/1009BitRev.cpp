#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0, mask = 0, i = 0;
    int m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    ans =(~n)& mask;
    cout<<ans;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n >> 1;
    //     i++;
    // }
}