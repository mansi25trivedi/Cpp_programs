//Take two numbers and check if both are positive and their sum is less than 100. 
// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a , b;
    cout<<"enter any two numbers: ";
    cin>>a>>b;
    if(a>0 && b>0){
        cout<<"sum"<<a+b;
        if((a+b)>100){
            cout<<"yes the sum is greater than 100";
        }else{
            cout<<"not greater than 100";
        }
    }

    return 0;
}