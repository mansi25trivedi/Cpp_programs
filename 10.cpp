//input the two inputs from the user and tell which one is greatest w/o using if else 
#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"the greatest among them is : ";
    cout<<(abs(a-b)+ (a+b))/2;
    return 0;
}
