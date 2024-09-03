#include<iostream>
using namespace std;
main(){
    char alph = 'A';
    int value = alph;   //Assigned the value of char type alph to inte type value. The "ASCII value" in alph got assigned to int value
    cout<<value;    //This is called implicit conversion or Type Conversion

    double price = 100.49;
    int newPrice = (int)price;  //This is called explicit Conversion or Type Casting
    cout<<newPrice;
}