#include<iostream>
// using namespace std;

class Check{
    int* subject;
    public:
    Check(int n){
        subject = new int[n];
        for(int i=0;i<n;i++){
            subject[i]=i*5;
        }
    }
    int operator[](int a){
        return subject[a];
    }
    int& operator[](int a){
        return subject[(int)a];
    }
    ~Check(){
        delete[] subject;
    }
};

int main()
{
    Check c(4);
    std::cout<<c[2]<<std::endl;
    c[2]=12;
    std::cout<<c[2]<<std::endl;

    return 0;
}