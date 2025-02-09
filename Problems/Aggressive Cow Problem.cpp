#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int count = 1;
    int lastCountedCow = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] - lastCountedCow >= minAllowedDist){
            count++;
            lastCountedCow = arr[i];
        }
    }
    return count >= C;
}

int getDistance(vector<int> &arr, int N, int C){
    sort(arr.begin(),arr.end());
    int st = 1;
    int end = arr[N-1] - arr[0];
    int ans = 0;
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(isPossible(arr, N, C, mid)){
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,4,8,9};
    int N = arr.size(), C = 3;
    cout << getDistance(arr, N, C) << endl;
    return 0;
}