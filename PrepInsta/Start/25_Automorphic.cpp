#include <iostream>
#include <cmath>
using namespace std;

int countLen(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int power(int num, int p){
    int multi = 1;
    for(int i = 0;i<p;i++){
        multi = multi * num;
    }
    return multi;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int square = num * num;
    cout<<square<<endl;
    int len = countLen(num);
    cout<<len<<endl;
    int div = power(10,len);
    cout<<div<<endl;
    int check = square % div;
    cout<<check<<endl;
    if(check==num)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
// 5, 6, 76, 376, 890625