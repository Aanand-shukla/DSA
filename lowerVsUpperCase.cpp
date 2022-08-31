#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char letter;
     cout<<"Enter a letter of Alphabet";
    cin>>letter;
    if(letter>='a' && letter<='z'){
        cout<<"Small letter Alphabet";
    }
    else if(letter>='A' && letter<='Z'){
        cout<<"Capital letter Alphabet";
    }
     else if(letter>='0' && letter<='9'){
        cout<<"Numeric value";
    }
    else{
        cout<<"Special Character";
    }
    

    return 0;
}
