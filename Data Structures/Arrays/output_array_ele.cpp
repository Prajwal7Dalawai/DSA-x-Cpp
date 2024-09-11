#include<iostream>
using namespace std;
main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};   //1st way
    int arr1[] = {1,2,3,4,5,6,7,8}; //2nd way
    cout<<sizeof(arr1); //usage of sizeof
    for(int i = 0; i<=size-1; i++)
    cout<<arr[i]<<endl;
}