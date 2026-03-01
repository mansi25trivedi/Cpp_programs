//input any character and output its ASCI value and vice versa 
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any character: ";
    cin>>c;
    int a = c;
    cout<<"the asci value of charcter "<<c<<"is: "<<a;
    int b;
    cout<<"enter any asci value:";
    cin>>b;
    char c2 = b;
    cout<<"the corresponding char value for the given asci value: "<<c2;
}