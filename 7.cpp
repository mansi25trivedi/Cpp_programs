//input the marks of 5 subjects and output the percentage
#include<iostream>
using namespace std;
int main(){
    float s1, s2, s3,s4, s5, p, total = 500;
    cout<<"enter the marks of 5 subjects: ";
    cin>>s1>>s2>>s3>>s4>>s5;
    float s = s1 + s2 + s3 + s4 + s5;
    p = s * 100 / 500 ;
    cout<<"the percentage is : "<<p<<"%  ";
}