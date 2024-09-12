#include<iostream>
using namespace std;

void reverse_array(int arr[],int size){
    int start = 0, end = size-1;
    while (end>=start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

main(){
    int size = 5;
    int arr[size];
    cout<<"Enter the value elements in an array.\n";
    for(int i = 0; i < size; i++)
    cin>>arr[i];
    reverse_array(arr,size);
    cout<<"The reversed array is:"<<endl;
    for(int i = 0; i < size; i++)
    cout<<arr[i]<<endl;
}