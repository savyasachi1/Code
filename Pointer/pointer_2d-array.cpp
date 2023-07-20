#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{2, 3, 5},{ 6, 5, 4}, {6, 7, 8}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<&(arr[i][j])<<" Value=  "<<arr[i][j]<<endl;
            
        }
    }
    int (*ptr)[3]= arr;
    cout<<*(*(ptr+1)+1)<<endl;
    cout<<arr+1<<endl;
    cout<<*arr[0]+1;
}