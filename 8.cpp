//input two strings and print the values in diffrent lines
#include<iostream>
using namespace std;
int main(){
    string s1 , s2 ;
    cout<<" enter your firstname and lastname: ";
    getline(cin, s1);
    getline(cin, s2);
    cout<<"entered strings are : "<<s1<<" and  "<<endl<<s2;
    return 0;
}
//with getline() you can enter more than one string or strings seperated with space as 1 string
//while with only cin , you cannot enter strings with space sepereated 