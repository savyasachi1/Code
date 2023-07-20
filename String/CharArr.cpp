#include<iostream>
#include<string>
using namespace std;

void reverse(char name[], int n)
{
    for(int i=0;i<n;i++,n--){
        swap(name[i],name[n-1]);
    }
}
int GetLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
       count++;
    }
    return count;
}

int main(){
    char name[20];
    // char naam[]='savya';
    // int n=sizeof(naam)/sizeof(char);
    // cout<<n<<" "<<naam<<endl;
    cin.getline(name, 20);
    cout<<name<<endl;
    int n= GetLength(name);
    reverse(name, n);
    cout<<name<<endl;
}