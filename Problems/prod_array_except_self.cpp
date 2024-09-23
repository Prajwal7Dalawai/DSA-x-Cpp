#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
       // int prefix=1;
        int suffix=1;
        vector<int> ans(n,1);
        for(int i = 1; i<n; i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;
    }

main(){
    vector<int> vec = {1,2,6,7,8};
    vector<int> prodVector = productExceptSelf(vec);
    cout<<"The answers are:"<<endl;
    for(int i = 0; i<prodVector.size()-1; i++)
    cout<<prodVector[i]<<endl;
}