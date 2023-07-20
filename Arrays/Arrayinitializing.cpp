#include <iostream>
using namespace std;

int main()
{
    int array[5];
    //Enitializing every element of the array to the same value
    fill_n(array,5,1);
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;
    }
}