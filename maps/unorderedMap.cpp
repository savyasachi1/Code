#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //decleration
    unordered_map<int,string> roll;
    
    //insersion 1
    pair<int,string> p1 = make_pair(1,"Savya");
    roll.insert(p1);

    //insersion 2
    pair<int,string> p2 (2,"Krishna");
    roll.insert(p2);

    //insersion 3
    roll[3]="Niraj";

    //insersion 4
    roll[4]="Priyanshu";

    //printing using key and at function 
    cout<<roll[1]<<endl;
    cout<<roll.at(4)<<endl;

    roll[1]="SavyaSachi";

    //printing using for each
    for(auto i:roll){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //printing using iterator function
    unordered_map<int,string> :: iterator it=roll.begin();
    while(it != roll.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    unordered_map<int, int> num;
    int arr[]={1, 2, 3, 4, 8, 5, 3, 6, 4, 12, 12, 15, 11, 7, 2, 5 ,8 , 9, 4, 5, 1, 3};
    for(int i=0;i<sizeof(arr)/4;i++){
        num[arr[i]]++;
    }
    for(auto i:num){
        cout<<i.first<<" "<<i.second<<endl;
    }

}