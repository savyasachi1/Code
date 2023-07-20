#include<iostream>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int i=n-1;
    int j=m-1;
    vector<int> sum;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int num;
        int add=0;
        add=a[i]+b[j]+carry;
        if(carry>0){
            carry=0;
        }
        carry=add/10;
        num=add%10;
        sum.push_back(num);
        if(i==0){
            for(;j>=0;j--){
                sum.push_back(b[j]);
            }
        }
        if(j==0){
            for(;i>=0;i--){
                sum.push_back(a[i]);
            }
        }
    }
    return sum;
}

int main(){
    int arr[]
}