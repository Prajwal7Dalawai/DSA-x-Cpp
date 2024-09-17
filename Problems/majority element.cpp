#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int majority_element(vector<int> &nums){    
//     int freq = 1;
//     int n = nums.size();
//     int me = n/2;
//     sort(nums.begin(), nums.end());

//     for(int i = 1; i < n; i++){
//         if(nums[i] == nums[i-1])
//         freq++;
//         else
//         freq = 1;
//         if (freq >= me)
//         {
//             return nums[i];
//         }
//     }
//     return -1;
// }

int majority_element(vector<int> &nums){    //More's Algorithm
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

main(){
    vector<int> nums = {1,5,1,4,1,1,1,1};
    cout<<"Answer is "<<majority_element(nums)<<endl;
}