//swap the two numbers with the help of a third variable
#include<iostream>
using namespace std;
int main(){
    int a , b, t;
    cout<<"enter two numbers :";
    cin>>a>>b;
    cout<<" Previously: a = "<<a <<" and  b = "<<b;
    t = a ;
    a = b;
    b = t;
    cout<<"Ater swapping: a = "<<a<<"and b = "<<b;
    return 0;
}
