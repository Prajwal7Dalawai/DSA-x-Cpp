#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=largest)
        {
            largest = arr[i];
        }
        else
        continue;
    }
    return largest;
}

int smallest(int arr[],int n){
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<=smallest)
        {
            smallest = arr[i];
        }
        else
        continue;
    }
    return smallest;
}

main(){
    int size = 5;
    int arr[size];
    for(int i = 0; i < size; i++)
    cin>>arr[i];
    cout<<"Smallest number in the array: "<<smallest(arr,size)<<endl;
    cout<<"Largest number in the array: "<<largest(arr,size)<<endl;
}