#include<iostream>
using namespace std;

void func(int (*arr)[2][3]){
    cout<<arr[1][1][2];
}

int main(){
    int arr[2][2][3]={{{2,3,4},{4,6,3}},{{3,5,4},{6,4,21}}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cout<<i<<" "<<j<<" "<<k<<" Address- "<<&arr[i][j][k]<<" Value- "<<arr[i][j][k]<<endl;
            }
        }
    }
    cout<<*arr[0][0]+1<<endl;
    func(arr);
}