#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of n:"<<endl;
    cin>>n;
    for(int i = 1;i<n; i++){
        for(int j = 0;j<i;j++)
        cout<<"*"<<" ";
        cout<<endl;
    }
}