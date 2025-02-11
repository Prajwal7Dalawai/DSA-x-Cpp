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
    vec.erase(vec.begin());   //erase() function
    vec.erase(vec.begin()+2,vec.begin()+4);   //erase() function
    //vec.clear();    //clear() function
    cout<<"Vector begin: "<<*(vec.begin())<<endl;    //begin() function
    cout<<"Vector end: "<<*(vec.end())<<endl;      //end() function
    for(int i = 0; i<vec.size(); i++) cout<<vec[i]<<" ";
}