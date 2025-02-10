#include<iostream>
#include<vector>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void display(vector<int> &arr){
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
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
    bubble_sort(arr);
    cout<<"Array after sorting: \n";
    display(arr); // Display the sorted array
    return 0;
}