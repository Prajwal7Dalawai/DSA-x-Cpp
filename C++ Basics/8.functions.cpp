#include<iostream>
using namespace std;
void print()    //1.Function With no return Type and no parameters.
{       
    cout<<"Hello, I am a Function with no return type and no parametres\n";
}

void sum(int a, int b)  //2.Function with no return type and with parameters(those in brackets)
{
    cout<<a+b<<endl;
}

int multiply()   //3.Function with return type and no parameters
{
    return 5*6;
}

int reminder(int a, int b)  //4. Function with return type and with parameters
{
    return a%b;
}

int factorial(int n)    //Recursive Function
{
    if(n==0 || n == 1)
    return 1;
    else{
        return n*factorial(n-1);
    }
}

void swap3(int &a,int &b,int &c){   //swapping 3 numbers
    int temp=b;
    b=a;
    a=c;
    c=temp;
}

main(){
    //Calling each function in main to show its Demonstration

    //1st Function
    print();

    //2nd function
    sum(54,6);

    //3rd function
    cout<<multiply()<<endl;

    //4th function

    cout<<reminder(10,4)<<endl;

    //5th function
    cout<<"Factorial= "<<factorial(5)<<endl;
}