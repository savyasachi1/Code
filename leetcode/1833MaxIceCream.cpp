#include<iostream>
using namespace std;

int maxIceCream(int costs[],int n, int coins) {
        int count=0;
        // int n = sizeof(costs)/sizeof(int);
        int sum=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(costs[j]>=costs[j+1]){
                    swap(costs[j],costs[j+1]);
                }
            }
        }
        for(int i=0;sum<=coins,i<n;i++){
            sum+=costs[i];
            if(sum<=coins){
                count++;
            }
        }
        return count;
    }
int main(){
    int costs[]={ 1, 6, 3, 1, 2, 5};
    int n=sizeof(costs)/sizeof(int);
    int coins=20;
    cout<<maxIceCream(costs,n,coins);
}