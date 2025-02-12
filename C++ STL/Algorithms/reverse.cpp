#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void display(vector<pair<int,int>> v){
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
}
main(){
    int arr[5] = {5, 2, 3, 1, 4};
    sort(arr, arr + 5);
    sort(arr, arr+5, greater<int>()); //for sorting in descending order
    vector<pair<int,int>> v2 = {{1, 2}, {3, 4}, {1, 3}};
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v.begin(), v.end());
    reverse(v.begin()+1, v.begin()+4);
    reverse(v2.begin(), v2.end());
    display(v2);
}