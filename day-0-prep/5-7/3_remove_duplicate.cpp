#include<iostream>
using namespace std;

int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

void elementpop( char str[], int a, int n){
    for(int i=a;i<n;i++){
        str[i]=str[i+1];
    }
}

void findDuplicate(char str[]){
    for(int i=0;i<length(str);i++){
        for(int j=i+1;j<length(str);j++){
            if(str[i]==str[j]){
                elementpop(str,j,length(str));
                j--;
            }
        }
    }
}

int main(){
    char str[50];
    cout<<"Enter the string :"<<endl;
    cin.getline(str,50);
    cout<<"Entered string is :"<<str<<endl;
    findDuplicate(str);
    cout<<"New string is :"<<str<<endl;
}