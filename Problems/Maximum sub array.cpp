#include<iostream>
#include<vector>
using namespace std;


main(){
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT8_MIN;
    int currentSum = 0;
        for(int ele : arr){
            currentSum += ele;
            maxSum = max(currentSum,maxSum);
            if(currentSum<0)
            currentSum = 0;
        }
    cout<<"Max sub array sum = "<<maxSum<<endl;
}