#include<iostream>
using namespace std;
main(){
    int n = 0;

//if condition
    if(n>=0){      
        cout<<"n is 0"<<endl;
    }

//if-else condition
    if(n>0){        
        cout<<"n is greater";
    }
    else{
        cout<<"n is again 0\n";
    }

//if-else-if ladder
    int age = 19;
    if(age<5){      
        cout<<"Not eligible to vote"<<endl;
    }
    else if(age>5 && age<17){
        cout<<"Wait until he/she is eligible"<<endl;
    }
    else{
        cout<<"Eligible to vote"<<endl;
    }

//nested if
    if(age<5){
        if (age<0)
        {
            cout<<"Age cannot be negative"<<endl;
        }
        else{
            cout<<"Cannot vote\n";
        }
        
    }
}