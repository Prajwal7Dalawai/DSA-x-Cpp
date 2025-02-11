#include<iostream>
#include<map>

using namespace std;

main(){
    multimap<string,int> m;
    m.emplace("TV",2000);
    m.emplace("Mobile",10000);
    m.emplace("Laptop",30000);
    m.emplace("Tablet",5000);
    m.emplace("Tablet",5000);
    m.erase(m.find("Tablet"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}