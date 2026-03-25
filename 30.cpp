//convert string to int 
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter any number: ";
    cin>>s;
    int n = stoi(s);
    cout<<"succesor of entered num is: "<<n+1;
        return 0;
}