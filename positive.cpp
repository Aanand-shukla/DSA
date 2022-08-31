#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number";
    cin>>a;
     if(a>0){
        cout<<"Positive number";
     }
     else if(a==0){
        cout<<"number is 0";
     }
     else{
        cout<<"Negative number";
     }
    return 0;
}
