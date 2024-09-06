#include<iostream>
using namespace std;
main(){
    int n=4;
    for (int i = 0; i < n; i++)
    {
        //spaces
        for(int j=0; j<n-i-1; j++)
        cout<<" ";

        //first number
        for (int j = 1; j < i+1; j++)
        cout<<j;
        
        //second number
        for (int j = i; j > 1 ; j--)
        cout<<j;
        
        cout<<endl;
        
    }
    
}