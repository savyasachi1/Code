#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    char* arr= new char[str.length()];

    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122)
            arr[i]=str[i]-'a'+'A';
        else if (str[i]>=65&&str[i]<=90)
            arr[i]=str[i]-'A'+'a';
        else
            arr[i]=str[i];
    }
    cout<<arr;
}
