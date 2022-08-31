#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
        }
        else{
            cout<<"prime number"<<endl;
        }
    }
    return 0;
}
