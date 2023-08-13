#include<iostream>
using namespace std;

void linearSearch( int *arr, int size, int search)
{
    int count=0;
    for ( int i=0;i<size;i++){
        count++;
        if(arr[i]==search)
        {
            cout<<"Here is the element on index "<<i+1<<" after "<<count<<" steps"<<endl;
            
            return;
        }
    }
    cout<<"Element Not Found"<<endl;
}

void binarySearch(int* arr, int size, int search)
{
    int start=0, end= size-1, middle= size/2;
    int count=0;
    while(start<=end)
    {
        count++;
        if(arr[middle]==search)
        {
            cout<<"Here is the element on index "<<middle+1<<" after "<<count<<" steps"<<endl;

            return;
        }

        else if(arr[middle]>search)
        {
            end = middle - 1;
        }

        else if(arr[middle]<search)
        {
            start = middle + 1;
        }

            middle = (end+start)/2;
    }

}

int main()
{
    int arr[] = { 2, 3, 6, 8, 9, 13, 15};
    int size = sizeof(arr)/sizeof(arr[0]); 
    linearSearch( arr, size, 13);
    binarySearch( arr, size, 13);
    return 0;
}