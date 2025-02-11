#include<iostream>
#include<deque>
using namespace std;
main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    cout<<"Deque elements are: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Deque size: "<<d.size()<<endl;
    cout<<"Deque front element: "<<d.front()<<endl;
    cout<<"Deque back element: "<<d.back()<<endl;
    d.pop_front();
    cout<<"Deque after pop_front: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    d.pop_back();
    cout<<"Deque after pop_back: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    d.push_front(0);
    cout<<"Deque after push_front: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    d.push_back(6);
    cout<<"Deque after push_back: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    d.insert(d.begin()+2, 10);
    cout<<"Deque after insert: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    d.erase(d.begin()+3);
    cout<<"Deque after erase: ";
    for(auto i:d)
        cout<<i<<" ";   
    cout<<endl;
    d.clear();
    cout<<"Deque after clear: ";
    for(auto i:d)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Deque empty or not: "<<(d.empty()?"Yes":"No")<<endl;
    
}