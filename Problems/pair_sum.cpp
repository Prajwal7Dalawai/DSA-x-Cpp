#include<iostream>
#include<vector>
using namespace std;

// vector<int> pairsum(vector<int> &nums, int target){      Brute Force Method
//     vector<int> ans;
//     int n = nums.size();
//     for(int i = 0; i<n; i++){
//         for (int j = i+1; i < n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(nums[i]);
//                 ans.push_back(nums[j]);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }


vector<int> pairsum(vector<int> &nums, int target){         //using two pointer approach(works only when array/vector is sorted)
    vector<int> ans;
    int n = nums.size();
    int i =0, j = n-1;
    while(i<j){
        int ps = nums[i] + nums[j];
        if(ps>target)
        j--;
        else if(ps<target)
        i++;
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return ans;
    
}

main(){
    vector<int> nums = {2,6,8,11,78};
    int target = 9;
    vector<int> ans = pairsum(nums, target);
    cout<<"Answer is: "<<ans[0]<<" and "<<ans[1]<<endl;
}