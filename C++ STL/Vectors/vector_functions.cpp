#include<iostream>
#include<vector>
using namespace std;
main(){
    vector<char> vec = {'p','r','a','j','w','a','l'};

    cout<<vec.size()<<endl;     //size function
    vec.push_back('s');     //push_back() function
    vec.pop_back();     //pop_back() function
    cout<<vec.front()<<endl;    //front function
    cout<<vec.back()<<endl;     //back function
    cout<<vec.at(3)<<endl;
    vec.emplace_back(6);     //emplace_back() function and indexing
}