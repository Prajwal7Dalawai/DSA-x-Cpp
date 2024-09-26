#include<iostream>
#include<vector>
using namespace std;

int Moore(vector<int> &nums){    //More's Algorithm
    int freq = 0;
    int n = nums.size();
    int ans = 0;
    int me = n/2;
    for(int i = 0; i<n; i++){
        if(freq == 0)
        ans = nums[i];
        if(ans == nums[i])
        freq++;
        else
        freq--;
    }
    return ans;
}