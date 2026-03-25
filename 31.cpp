//print sum of two numbers given as string;
#include<iostream>
using namespace std;
int main(){
    string s1 ,s2;
    cout<<"enter any two numbers: ";
    cin>>s1>>s2;
    cout<<"the result is: "<<stoi(s1) + stoi(s2)<<endl;
    return 0;

}