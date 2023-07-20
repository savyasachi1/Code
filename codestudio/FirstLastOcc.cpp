#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void firstAndLastPosition(int arr[], int n, int k)
{
    // Write your code here
    int first = -1, last = -1;
     int s = 0, e = n - 1;
    int a = (s + e) / 2;
    int ans=0;
    // cout<<e<<" "<<s<<" "<<a<<" "<<ans<<" ";
    while (s <= e)
    {
        // if element is found
        if (arr[a] == k)
        {
            ans = a;
            // s = a + 1; for last occrence
            e = a - 1;
            if(arr[a+1]>k){
                break;
            }
            if(arr[a-1]<k){
                break;
            }
        }
        // if element is smaller then the searched number
        else if (arr[a] < k)
        {
            s = a + 1;
        }
        // if elememt is greater then the searched number
        else if (arr[a] > k)
        {
            e = a - 1;
        }
        a = (s + e) / 2;
    }
    
    cout << ans << endl;
    // for (int i = ans; i < n; i++)
    // {
    //     first =i;
    //     if (arr[i + 1] > arr[i])
    //     {
    //         break;
    //     }
    // }
    // for (int i = ans; i > 0; i--)
    // {
    //     last = i;
    //     if (arr[i - 1] < arr[i])
    //     {
    //         break;
    //     }
    // }
    cout <<"first Occ- "<< first << "  Last Occ- " << last;
}
int main()
{
    int arr[]{1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int k = 5;
    firstAndLastPosition(arr, n, k);
    return 0;
}