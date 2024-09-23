#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int lp = 0;
        int rp = n-1;
        while(lp<rp){
            int w = rp-lp;
            int h = min(height[lp],height[rp]);
            int area = h*w;
            maxWater = max(area,maxWater);
            height[lp]<height[rp] ? lp++:rp--;
        }
        return maxWater;
    }

main(){
    vector<int> vec = {5,8,9,4,39,7};
    cout<<"Max area water can aquire between two blocks: "<<maxArea(vec)<<endl;
}