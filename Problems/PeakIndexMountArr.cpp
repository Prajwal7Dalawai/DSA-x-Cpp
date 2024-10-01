#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size()-2;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            return mid;
            if( arr[mid]>arr[mid-1])
            start = mid+1;
            else
            end = mid -1;
        }
        return -1;
    }

main(){
    vector<int> arr = {18,29,38,59,98,100,99,98,90};
    cout<<"The peak value of the array is: "<<peakIndexInMountainArray(arr)<<endl;
}