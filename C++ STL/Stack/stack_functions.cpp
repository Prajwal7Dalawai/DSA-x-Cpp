#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.push(6);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s1.swap(s1);
    cout<<s1.size()<<endl;
    cout<<s.size()<<endl;
    return 0;
}