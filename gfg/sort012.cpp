#include<iostream>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int i, count=0;
        for(i=n-1;i>=count;i--){
            if(a[i]==0){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==1){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==2){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==3){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==4){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==5){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==6){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==7){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
        for(i=n-1;i>=count;i--){
            if(a[i]==8){
                swap(a[i],a[count]);
                count++;
                i++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int a[]={ 6, 5, 7, 3, 8, 2, 6, 1 , 9, 1, 8, 9, 4, 2, 5, 6, 1, 0, 2, 3};
    int n=sizeof(a)/sizeof(int);
     Solution ob;
     ob.sort012(a, n);

    for(int i=0;i<n;i++){
        cout << a[i]  << " ";
    }

    cout << endl;
        
        
    
    return 0;
}