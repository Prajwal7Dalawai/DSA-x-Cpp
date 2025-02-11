#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    a ^= b;
    b ^= a;
    a ^= b;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(m == 0){
        nums1[0] = nums2[0];
    }
    int i = n-1, j = m-1, idx = m+n-1;
    while(i >= 0 && j >= 0){
        if(nums2[i] > nums1[j]){
            nums1[idx--] = nums2[i--];
        }
        else {
            nums1[idx--] = nums1[j--];
        }
    }
    while(i >= 0){
        nums1[idx--] = nums2[i--];
    }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    cout<<"Merged array: ";
    for(int i = 0; i < m+n; i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}