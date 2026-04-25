//Take three numbers and check if they are in arithmetic progression.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter any three numbers : ";
    cin>>a>>b>>c;
    int d1 = b-a;
    int d2 = c-b;
    if(d1 == d2){
        cout<<"yes, they are in arithematic progression with common difference as: "<<d1;
    }else{
        cout<<"no, they are not in AP";
    }
}