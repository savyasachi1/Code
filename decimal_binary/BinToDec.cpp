#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        // int digit=n&1;
        // cout<<digit<<endl;
        n=n/10;
        // cout<<n<<endl;
        
        if (digit==1){
            ans=pow(2,i)+ans;  
        }
        // n>>1;
        i++;
    }
    cout<<ans<<endl;
}