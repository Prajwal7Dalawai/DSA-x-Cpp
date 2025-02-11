#include<iostream>
#include<vector>
using namespace std;
main(){
    vector<char> vec = {'p','r','a','j','w','a','l'};
    vector<char>::iterator it;
    for(it = vec.begin(); it!=vec.end(); it++){     //forward iterator
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<char>::reverse_iterator rev;
    for(rev = vec.rbegin(); rev!=vec.rend(); rev++){     //reverse iterator
        cout<<*rev<<" ";
    }
    cout<<endl;
    for(auto it = vec.rbegin(); it!=vec.rend(); it++){     //auto keyword
        cout<<*it<<" ";
    }
}