#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main(){
    vector<int> v = {1, 2, 3, 4, 5};
    int a = 5, b = 2;
    swap(a, b); //swap function
    cout<<"Minumum in vector is: "<<*min_element(v.begin(), v.end())<<endl;     //minumum_element function
    cout<<"Maximum in vector is: "<<*max_element(v.begin(), v.end())<<endl;    //maximum_element function
    binary_search(v.begin(), v.end(), 3)? cout<<"3 is present in vector": cout<<"3 is not present in vector"; //binary_search function

    cout << "__builtin_popcount(a): " << __builtin_popcount(a) << endl; //returns number of set bits in binary representation of 5
    cout<<"__builtin_popcountll(a): "<<__builtin_popcountll(a)<<endl; //returns number of set bits in binary representation of 5
    cout<<"__builtin_popcountll(b): "<<__builtin_popcountll(b)<<endl; //returns number of set bits in binary representation of 2
}