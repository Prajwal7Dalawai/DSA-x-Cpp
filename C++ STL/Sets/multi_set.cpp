#include<iostream>
#include<set>
using namespace std;

void display(multiset<int> s){
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}

main(){
    multiset<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    display(s);         // 5 5 10 10 15 20 20
}