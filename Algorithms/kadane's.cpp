#include<iostream>
#include<vector>
using namespace std;

int kadane(vector<int> &arr){
    int maxSum = INT8_MIN;
    int currentSum = 0;
        for(int ele : arr){
            currentSum += ele;
            maxSum = max(currentSum,maxSum);
            if(currentSum<0)
            currentSum = 0;
        }
        return maxSum;
}