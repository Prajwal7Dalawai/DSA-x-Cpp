#include<iostream>
#include<vector>
using namespace std;

int binary_search_iterative(vector<int> &nums, int target){
    int start = 0, end = nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(target == nums[mid]){
            return mid;
        }
        else{
            if(target<nums[mid])
            end = mid-1;
            if(target>nums[mid])
            start = mid+1;
        }
    }
    return -1;
}

int binary_search_optimized(vector<int> &nums, int target){
    int start = 0, end = nums.size()-1;
    while(start<=end){
        int mid = start + ((end-start)/2); //Incase if addition of start and end cross the integer limits
        if(target == nums[mid]){
            return mid;
        }
        else{
            if(target<nums[mid])
            end = mid-1;
            if(target>nums[mid])
            start = mid+1;
        }
    }
    return -1;
}

int binary_search_recursive(vector<int> &nums, int target,int start, int end){
    if(start<=end){
    int mid = start + ((end-start)/2);
    if (target>nums[mid]) binary_search_recursive(nums,target,mid+1,end);
    else if(target<nums[mid]) binary_search_recursive(nums,target,start,mid-1);
    else return mid;
    }
    return -1;
}