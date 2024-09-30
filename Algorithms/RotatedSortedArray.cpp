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