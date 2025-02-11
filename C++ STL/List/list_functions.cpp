#include<iostream>
#include<list>
using namespace std;

main(){
    list<char> lst = {'p','r','a','j','w','a','l'};

    cout<<lst.size()<<endl;     //size function
    lst.push_back('s');     //push_back() function
    lst.pop_back();     //pop_back() function
    cout<<lst.front()<<endl;    //front function
    cout<<lst.back()<<endl;     //back function
    cout<<lst.front()<<endl;  
    lst.erase(lst.begin()); //erase() function
    for(auto it = lst.begin(); it!=lst.end(); it++) 
    cout<<*it<<" ";   
    cout<<endl;
    //lst.clear();    //clear() function
    cout<<"List begin: "<<*(lst.begin())<<endl;    //begin() function
    for(auto it = lst.begin(); it!=lst.end(); it++) 
        cout<<*it<<" ";
}