#include<iostream>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        for(int i=0, j=n-1,k=0;i<n;i++){
            if(a[i]==2){
                swap(a[i],a[j]);
                j--;
            }
            else if(a[i]==1 && a[i+1]==0){
                swap(a[i],a[i+1]);
                k++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}