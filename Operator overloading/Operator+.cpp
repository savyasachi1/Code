#include<iostream>

class check{

    int intnum;
    int extnum;
    public:
    check():intnum (10),extnum(20) {}
    check(int a, int b):intnum(a), extnum(b) {};

    void display(){
        std::cout<<"Intnum = "<<intnum<<" Extnum = "<<extnum<<std::endl;
    }
    check operator+(const check &c1){
        check c((intnum+c1.intnum),(extnum+c1.extnum));
        return c;
    }
    check operator-(const check &c1){
        check c((intnum-c1.intnum),(extnum-c1.extnum));
        return c;
    }
    check operator*(const check &c1){
        check c((intnum*c1.intnum),(extnum*c1.extnum));
        return c;
    }
    check operator/(const check &c1){
        check c((intnum/c1.intnum),(extnum/c1.extnum));
        return c;
    }
};

int main()
{
    check num1,num2(30,40);
    check num3 = num1+num2;
    check num4 = num2-num1;
    check num5 = num2*num1;
    check num6 = num2/num1;
    num3.display();
    num4.display();
    num5.display();
    num6.display();
    num1.display();
    num2.display();
    return 0;
}