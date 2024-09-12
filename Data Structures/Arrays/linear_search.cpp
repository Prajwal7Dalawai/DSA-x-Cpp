#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int ele){
    for(int i = 0; i < size; i++){
        if(ele == arr[i])
        return i+1;
        else 
        continue;
    }
    return -1;
}

main(){
    int size = 5;
    int arr[size];
    int ele;
    cout<<"Enter the array elements\n";
    for(int i = 0; i < size; i++)
    cin>>arr[i];
    cout<<"Enter the element to be searched: ";
    cin>>ele;
    int pos = linear_search(arr,size,ele);
    if (pos>=0)
    {
        cout<<"Element "<<ele<<" is found at "<<pos<<" position.\n";
    }
    else{
        cout<<"Unsuccessfull search, element can't be found";
    }
    
}