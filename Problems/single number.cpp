# include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans = ans ^ val;
        }
        return ans;
    }

main(){
    vector<int> vec;
    int ele;
    cout<<"Enter the elements of the vector(press -1 to stop entering):"<<endl;
    while (1)
    {
        cin>>ele;
        if(ele == -1)
        break;
        vec.push_back(ele);
    }
    cout<<"The unique element in the vector is: "<<singleNumber(vec)<<endl;
}
    