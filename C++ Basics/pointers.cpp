#include<iostream>
using namespace std;

void change(int *p){        //Pass by reference
    *p = 20;;
}

main(){
    int a = 10;
    int *p = &a;    //pointer
    int** parent = &p;  //Pointer to Pointer
    int *nullPointer = NULL;
    cout<<*p<<endl;
    cout<<*(p+9)<<endl;
    cout<<*parent<<endl;
    change(&a);
    cout<<"a = "<<a<<endl;
}