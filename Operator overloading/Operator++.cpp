#include<iostream>

class Check{

    int marks;
    public:
    Check(){
        marks=0;
    }
    Check(int a){
        marks=a;
    }
    void display(){
        std::cout<<"marks = "<<marks<<std::endl;
    }

    Check operator++();
    Check operator--();
    Check operator++(int);
    Check operator--(int);
    // void operator++(Check &,int);

};

Check Check::operator++(){
    marks++;
    return *this;
}
Check Check::operator++(int){
    Check temp(*this);
    marks++;
    return temp;
}
// void Check::operator++(Check &c, int){
//     marks++;
// }
Check Check::operator--(){
    marks--;
    return *this;
}
Check Check::operator--(int){
    Check temp(*this);
    marks--;
    return temp;
}

int main()
{
    Check m;
    m.display();
    (m++).display();
    (m++).display();
    (++m).display();
    (m++).display();
    (--m).display();
    (--m).display();
    (m--).display();
    m.display();

    return 0;
}

