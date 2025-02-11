#include<iostream>
#include<map>
using namespace std;   
 main(){
    map<string,int> m;
    m["TV"] = 2000;
    m["Mobile"] = 10000;
    m["Laptop"] = 30000;
    m.emplace("Tablet",5000);
    m.insert({"Tablet",5000});
    m.emplace("AC",25000);
    cout<<m.size()<<endl;
    cout<<m.count("TV")<<endl;  
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //m.erase("Tablet");
    m.find("Mobile");

    if(m.find("Mobile")!=m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
 }