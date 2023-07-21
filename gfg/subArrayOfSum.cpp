#include<iostream>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum=arr[0];
        int i=0,j=1;
        vector<int> ans;
        while(sum!=s||j<n){
            if(sum<s){
                sum+=arr[j];
                j++;
            }
            else{
                sum-=arr[i];
                i++;
            }
        }
        ans.push_back(i+1);
        ans.push_back(j+1);
        
        return ans; 
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}