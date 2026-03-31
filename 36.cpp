//check if one of the two given numbers is a multiple of other
#include<iostream>
using namespace std;
int main(){
    int a ,b ;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    if(a % b == 0 || b % a == 0 ){
        cout<<"one is multiple of other";
    }else{
        cout<<"no one is multiple of other";
    }
}