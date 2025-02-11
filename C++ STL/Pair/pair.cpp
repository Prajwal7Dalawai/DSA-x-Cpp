#include<iostream>
#include<vector>
using namespace std;
main(){
    pair<int, char> p={1,'a'};
    cout<<"First value: "<<p.first<<endl;
    cout<<"Second value: "<<p.second<<endl;
    pair<int,pair<int,char>> p1={1,{2,'p'}};
    cout<<"First value: "<<p1.first<<endl;
    cout<<"Second value: "<<p1.second.first<<endl;
    cout<<"Third value: "<<p1.second.second<<endl;

    //vector of pairs
    vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
    for(auto i:v)
        cout<<"First: "<<i.first<<" Second: "<<i.second<<endl;
    v.push_back({7,8});
    v.emplace_back(9,10);
}