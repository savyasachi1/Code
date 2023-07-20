#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[20];
    cin.getline(arr,20);
    cout<<arr;
    char name[20] = "savya sachi";
    int len=strlen(arr);
    cout<<len;
    strcmp(arr, name);
}