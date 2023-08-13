#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int s){
        size=s;
        arr = new int[size];
        top = -1;
    }

    void push(int a){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=a;
    }

    void print(){
        if(top==-1){
            cout<<"Stack Empty"<<endl;
            return;
        }
        for( int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Empty"<<endl;
            return;
        }
        cout<<"Popped "<<arr[top]<<endl;
        top--;
    }

    void peek(){
        cout<<"Top element "<<arr[top]<<endl;
    }

    void isEmpty(){
        if(top==-1)
            cout<<"Stack Empty"<<endl;
        else
            cout<<"Stack is not empty"<<endl;
    }
};

int main()
{
    Stack s(10);
    s.isEmpty();
    s.print();
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.print();
    s.push(16);
    s.push(17);
    s.print();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.print();
    s.push(18);
    s.push(19);
    s.push(20);
    s.push(21);
    s.push(22);
    s.print();
    s.isEmpty();
    return 0;
}