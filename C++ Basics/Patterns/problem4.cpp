#include<iostream>
using namespace std;
main(){
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j<i; j++)
            cout<<" ";
        for (int j = 0; j < 4-i; j++)
            cout<<i+1;
        cout<<endl;
    }
    
}