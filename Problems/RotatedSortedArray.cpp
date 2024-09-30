#include<iostream>
#include<vector>
using namespace std;

int RotatedSortedArray(vector<int>& arr, int target){
     int n = arr.size();
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(target == arr[mid]){  
        return mid;
        }

        if(arr[start]<=arr[mid]){        //Left Half Sorted
            if(arr[start]<=target && target<=arr[mid])
               end = mid-1;
            else
               start = mid+1;
        }
        else{
            if(arr[mid]<=target && target<=arr[end])
                start = mid+1;
            else
                end=mid-1;
        }
    }
    return -1;
}

main(){
    int target;
    vector<int> arr = {4,5,6,7,0,1,2};
    cout<<"Enter the Search element"<<endl;
    cin>>target;
    int pos = RotatedSortedArray(arr,target);
    if(pos>=0)
    cout<<"Element "<<target<<" found at "<<pos<<" position\n";
    else
    cout<<"Element not found\n";
}