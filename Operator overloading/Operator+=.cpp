#include<iostream>

class Check{
    int marks;
    public:
    Check(){
        marks = 0;
    }
    // void operator+=(int n);
    void operator-=(int n);
    friend void operator+=(Check &,int);
    void display(){
        std::cout<<"Marks = "<<marks<<std::endl;
    }
};

void operator+=(Check &c, int a){
    c.marks+=a;
}

// void Check::operator+=(int n)
// {
//     marks+=n;
// }
void Check::operator-=(int n)
{
    marks-=n;
}

int main()
{
    Check c1;
    c1.display();
    c1+=10;
    c1.display();
    c1-=5;
    c1.display();

    return 0;
}

