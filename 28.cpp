//15.	Convert lowercase char to uppercase using ASCII manipulation.
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any lowercase char: ";
    cin>>c;
    char c1 = c - 32;
    cout<<"the uppercase char is : "<<c1;
    return 0;
}