#include<iostream>
using namespace std;
int binaryTodecimal(long int binNum){
    int ans = 0 , pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    return ans;
}

main(){
    long int binNum = 1001;
    cout<<binaryTodecimal(binNum)<<endl;
}