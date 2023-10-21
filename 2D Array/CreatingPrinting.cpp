#include <iostream>
using namespace std;

void print(int arr[3][3]){
    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void wavePrint(int arr[][3]){
    for(int i=0;i<3;i++){
        if(i%2==0){
            for( int j=0;j<3;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for( int j=2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}

void spiralPrint(int arr[][3]){
    int count=0;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = 2;
    int endingCol = 2;
    int total = 9;
    while(count<total){
        for(int i=startingCol;i<=endingCol;i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;
        for(int i=startingRow;i<=endingRow;i++){
            cout<<arr[startingCol][i]<<" ";
            count++;
        }
        endingCol++;
        for(int i=endingCol;i<=startingCol;i++){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow++;
        for(int i=endingRow;i<=startingRow;i++){
            cout<<arr[startingCol][i]<<" ";
            count++;
        }
        startingCol++;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    print(arr);
    print(arr2);
    wavePrint(arr);
    wavePrint(arr2);

    spiralPrint(arr2);
    return 0;
}