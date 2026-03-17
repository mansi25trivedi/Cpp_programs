//swap two numbers without the use of third variable 
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter any two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping: a = "<<a<<" b = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After Swapping: a = "<<a<<" b = "<<b;
    return 0;
}