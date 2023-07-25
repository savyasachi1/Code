#include<iostream>
using namespace std;

class Object{
    private:
    int marks;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int getMarks(){
        return this->marks;
    }
    void print(){
        cout<<"Age "<<this->age<<endl;
        cout<<"Marks "<<this->marks<<endl;
    }
    void setAge(int a){
        this->age=a;
    }
    void setMarks(int a){
        this->marks=a;
    }

};

int main(){
    Object obj1;
    // obj1.marks=95;
    // obj1.age=20;
    obj1.setAge(20);
    obj1.setMarks(95);
    //cout<<obj1.marks<<endl;
    //cout<<obj1.age<<endl;
    obj1.print();
    cout<<obj1.getAge()<<endl;
    cout<<obj1.getMarks()<<endl;

}