#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char a;
    cout<< "Enter a number"<<endl;
    cin>>a;
    if(a>='a' && a<='z'){
        cout<<"small letters";
    }
    else if (a>='A' && a<='Z')
    {
        cout<<"Capital letters";
    }
    else if (a>='1'&& a<='9')
    {
        cout<<"numbers";
    }
    
    
    return 0;
}
