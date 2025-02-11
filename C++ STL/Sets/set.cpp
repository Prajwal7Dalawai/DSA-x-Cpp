#include<iostream>
#include<set>
using namespace std;

void display(set<int> s){
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}

main(){
    set<int> s;
    s.insert(10);      
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(5);       // duplicate elements are not allowed
    s.insert(10);      // duplicate elements are not allowed
    s.insert(25);
    s.insert(20);      // duplicate elements are not allowed
    s.insert(30);
    cout<<"Count: "<<s.count(10)<<endl;    // 1
    cout<<"Size:"<<s.size()<<endl;         // 6
    cout<<"Empty:"<<s.empty()<<endl;       // 0
    s.erase(10);
    display(s);         // 5 15 20 25 30
    cout<<"Lower bound: "<<*s.lower_bound(13)<<endl;  // 15 value should not be less than key
    cout<<"Upper bound: "<<*s.upper_bound(15)<<endl;  // 20 value should be greater than key
}