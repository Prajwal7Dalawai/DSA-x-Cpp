//Dutch National Flag Algorithm
/*
0s - 0 to low-1
1s - low to mid-1
2s - high+1 to n-1
unsorted - mid to high
*/

#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){

    int temp = a;
    a = b;
    b = temp;
}

void DNF_sort(vector<int> &arr){
   int mid=0,low=0,high=arr.size()-1;
   while(mid<=high){
    if(arr[mid]==0){
     swap(arr[low],arr[mid]);
     low++;
     mid++;
    }
    else if(arr[mid]==1)
     mid++;
    else {
     swap(arr[high],arr[mid]);
     high--;
    }
   }
}

void display(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    arr.resize(n); // Resize the vector to avoid out-of-bounds access
    cout<<"Enter the elements of the array(only enter 0/1/2): \n";
    for(int i = 0; i<n; i++)
    cin>>arr[i];
    cout<<"Array before sorting: \n";
    display(arr);
    DNF_sort(arr);
    cout<<"Array after sorting: \n";
    display(arr); // Display the sorted array
    return 0;
}
