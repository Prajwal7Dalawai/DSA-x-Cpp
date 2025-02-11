#include<iostream>
#include<unordered_map>
using namespace std;

main(){
    unordered_map<string, int> m;
    m["TV"] = 2000;
    m["Mobile"] = 10000;
    m["Laptop"] = 3000;
    m.emplace("Tablet",5000);   
    m.insert({"Tablet",5000});
    m["Tablet"]=5000;
    m.emplace("AC",25000);
    cout<<m.size()<<endl;
    cout<<m.count("TV")<<endl;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Tablet");
    m.find("Mobile");
    m.erase(m.find("Mobile"));
}