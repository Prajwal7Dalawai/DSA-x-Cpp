#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int i = 1 ; i<=n; i++){
        for(int j = 0 ; j<i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}