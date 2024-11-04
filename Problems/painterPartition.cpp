#include<iostream>
#include<vector>
using namespace std;


bool isPossible(vector<int>& arr, int m, int n, int maxAllowedValue){
    int painters = 1, time=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(time+arr[i]<=maxAllowedValue){
            time+=arr[i];
        }
        else{
            painters++;
            time = arr[i];
        }
    }
    return painters<=m? true:false;
}

int minTimetoPaint(vector<int> &arr,int m, int n){
    int sum=0, maxValue=INT32_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxValue = max(maxValue,arr[i]);
    }
    int st=maxValue, end=sum, ans=-1;
    while (st<=end)
    {
        int mid = st+(end-st)/2;
        if(isPossible(arr,m,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;

}

main(){
    vector<int> arr = {40,30,50,20};
    int n=4, m=2;
    cout<<minTimetoPaint(arr,m,n)<<endl;
}