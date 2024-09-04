#include<iostream>
using namespace std;
main(){
int n = 0;
// While loop
    while(n>=0){
        cout<<n<<endl;
        n--;
    }

//do-while loop

do
{
    cout<<n<<endl;
    n--;
} while (n>=0);

//for loop
for(int i = 0; i<=5; i++){
    cout<<i<<endl;
}

//nested loops
for(int i = 1; i<=5; i++){
    for (int j = 1; j <= i; j++)
    {
       cout<<j;
    }
    cout<<endl;
}
}