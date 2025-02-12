#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int,int> a, pair<int,int> b){
    if( a.second < b.second) return true;
    else if(a.second > b.second) return false;
    else if(a.first < b.first) return true;
else return false;
}

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
    cout<<"Sorting by first element"<<endl;
    sort(v2.begin(), v2.end()); //sorts by first element
    cout<<"Sorting by second element"<<endl;
    display(v2);
    sort(v2.begin(), v2.end(), greater<pair<int,int>>()); //sorts by second element
    display(v2);
    sort(v2.begin(), v2.end(), comparator); //sorts by second element
    display(v2);
}