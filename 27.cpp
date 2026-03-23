//14.	Input two integers and print result of float division (avoid integer division).
#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter any two integers: ";
    cin>>a>>b;
    float n = static_cast<float>(a) + b ;
    cout<<"result is: "<<(float)a+b<<endl<<n;
    return 0;
//stack_cast used to convert it into float value
}