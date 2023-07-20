#include<iostream>
using namespace std;

int count(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

char repeated(char str[]){
    for(int i=0;i<count(str);i++){
        for(int j=i+1;j<count(str);j++){
            if(str[i]==str[j]){
                return str[i];
            }
        }
    }
    return 0;
}

int main(){
    char str[20];
    cout<<"Enter the string :"<<endl;
    cin.getline(str,20);
    cout<<"The first repeated character is : "<<repeated(str);
}