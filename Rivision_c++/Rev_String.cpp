#include<iostream>
using namespace std;

int count(char arr[]){
    int count=0;
    for(int i=0;arr[i] !='\0';i++){
       count++;
    }
    return count;
}

char reverse(char arr[]){
    int n=count(arr);
    char temp;
    for(int i=0;i<n;i++,n--){
        temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
    }
}

int main(){
    char name[20];
    cin>>name;
    cout<<name<<endl;
    reverse(name);
    cout<<name;
}