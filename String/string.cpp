#include<iostream>
#include<string>
using namespace std;

void breaks(string str){
    cout<<"\"";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            cout<<"\"\"";
            continue;
        }
        cout<<str[i];
    }
    cout<<"\""<<endl;
}

void replace(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.replace(i,1,"@");
        }
    }
    cout<<str;
}

int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    breaks(str);
    replace(str);
}