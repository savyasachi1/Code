#include<iostream>
using namespace std;

int differenceofSum(int n, int m){
    int sumOfDiv = 0, sumOfNonDiv = 0;
    for( int i=1;i<=m;i++){
        if(i%n==0)
            sumOfDiv += i;
        else
            sumOfNonDiv += i;
    }
    return abs(sumOfDiv-sumOfNonDiv);
}

int main()
{
    int n = 3, m = 10;
    cout<<differenceofSum(n, m);    
    return 0;
}