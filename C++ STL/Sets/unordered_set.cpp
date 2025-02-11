#include<iostream>
#include<unordered_set>
using namespace std;

void display(unordered_set<int> s){
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}

main(){
 unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(5);
    s.insert(10);
    s.insert(25);
    display(s);         // 5 10 15 20 25
}