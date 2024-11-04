#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr,int m,int n,int maxAllowedPages){
    int stu=0, pages=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxAllowedPages) return false;
        if(arr[i] + pages <= maxAllowedPages)   pages+=arr[i];
        else{
            stu++;
            pages=arr[i];
        }
    }
    return stu>m? false:true;
}

int bookAllocation(vector<int>& arr,int m,int n){
    if(m>n) return -1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int ans=-1;
    int st = 0, end=sum;
    while(st<=end){
        int mid = st+(end-st)/2;
        cout<<mid<<endl;
        if(isValid(arr,m,n,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int m = 2, n = 4;
    cout<<bookAllocation(arr,m,n)<<endl;
}