#include<iostream>
using namespace std;

class Stack{

    public:
    int size;
    int top;
    char* arr;

    Stack(int s){
        
        arr = new char[s];
        size = s;
        top = -1;

    }

    void add(int d){
        top++;
        if(top==size){
            cout<<"Stack Overflow"<<endl;
            top--;
            return;
        }        
        arr[top]=d;
    }

    void print(){
        for( int i=0;i<=top;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    char topp(){
        // cout<<"Arr top- "<<arr[top]<<endl;
        return arr[top];
    }

    void pop(){
        // cout<<"Element popped- "<<arr[top]<<endl;
        top--;
    }
};

int main()
{
    Stack s(10);
    s.add('s');
    s.add('a');
    s.add('v');
    s.add('y');
    s.add('a');
    s.add('s');
    s.add('a');
    s.add('c');
    s.add('h');
    s.add('i');
    s.print();
    char m[11];
    for(int i = 0;i<10;i++){
        m[i]= s.topp();
        s.pop();
    }
    cout<<m<<endl;
    s.print();
    return 0;
}