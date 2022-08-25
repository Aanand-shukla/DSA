#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    if(a>0){
        cout<< "Positive";
    }
    else{
        if(a<0){
            cout<<"negative";
        }
        else{
            cout<<"Zero";
        }
    }
    return 0;
}
