#include<iostream>
#include<string.h>
using namespace std;

int length(char *str){
    int count=0;
    for(int i=0;(*(str+i))!='\0';i++)
    {
        count++;
    }
    return count;
}

void print(char* str, int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Address "<<(int*) &str[i]<<" Char-"<<*(str+i)<<endl;
    }
}

int main()
{
    char arr[50]="savyasachiisagoodboy";
    // arr[14]='p';
    char *ptr=arr;
    cout<<&ptr<<endl;
    cout<<&ptr+1<<endl;
    cout<<length(arr)<<endl;
    int size=strlen(arr);
    cout<<size<<endl;
    print(arr, size);
}