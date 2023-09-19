#include<iostream>
using namespace std;

int main()
{
    int r = 7, unit = 2;
    // cin>>r>>unit;
    int arr[] ={ 2, 8, 3, 5, 7, 4, 1, 2};
    int sum = 0;
    unit*=r;
    for(int i = 0;i<8; i++){
        sum += arr[i];
        if(sum>=unit){
            cout<<sum<<"   -  "<<i+1;   
            break;
        }
    }

    return 0;
}