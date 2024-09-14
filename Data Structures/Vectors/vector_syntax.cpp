#include<iostream>
#include<vector>
using namespace std;
main(){
    vector<int> vec;    //1st way
    vector<int> vect = {1,2,3};
    cout<<vect[0]<<endl;
    vector<int> vecot(3,0);
    cout<<vecot[1]<<endl;
}