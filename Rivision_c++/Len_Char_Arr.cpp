#include<iostream>
using namespace std;

int stringcount(char name[]){
    int count=0;
    char a;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<stringcount(name);
    return 0;
}