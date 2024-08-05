#include<iostream>
// using namespace std;

class Check{
    int marks;
    public:
    Check(int a){
        marks = a;
    }
    Check operator()(int a){
        marks = a;
        return *this;
    }
    void display(){
        std::cout<<"Marks = "<<marks<<std::endl;
    }
};

int main()
{
    Check c(20);
    c.display();
    c(30);
    c.display();   
    return 0;
}