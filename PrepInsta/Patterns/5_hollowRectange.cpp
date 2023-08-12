#include<iostream>
using namespace std;

int main()
{
    int l, b;
    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    for( int i=0;i<b;i++){
        for( int j=0;j<l;j++){
            if(i==0||i==b-1){
                cout<<"* ";
            }
            else{
                if(j==0||j==l-1){
                    cout<<"* ";
                }
                else
                    cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}