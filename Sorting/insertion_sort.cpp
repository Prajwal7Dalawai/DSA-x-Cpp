#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){

    int temp = a;
    a = b;
    b = temp;
}

void insertion_sort(vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i<n; i++){
       int key = arr[i];
       int j = i-1;
       while(j >=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
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
    cout<<"Enter the elements of the array: \n";
    for(int i = 0; i<n; i++)
    cin>>arr[i];
    cout<<"Array before sorting: \n";
    display(arr);
    insertion_sort(arr);
    cout<<"Array after sorting: \n";
    display(arr); // Display the sorted array
    return 0;
}
