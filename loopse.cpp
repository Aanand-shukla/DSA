#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=0, n, sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
        sum= sum+i;
         i=i+1;
    }
    cout<<sum<<endl;
    return 0;
} 


