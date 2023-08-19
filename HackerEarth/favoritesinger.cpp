#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    long long count = 0;
    long long max = 0;
    for (auto x : mp)
    {
        if (x.second == max)
        {
            count++;
        }
        if (x.second > max)
        {
            max = x.second;
            count = 1;
        }
    }
    cout << count << endl;
    return 0;
}