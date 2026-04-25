//Take three numbers and check if they are in geometric progression.
#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<<"enter any 3 numbers : ";
    cin>>a>>b>>c;
    int r1 = b/a;
    int r2 = c/b;
    if(r1 == r2){
        cout<<"yes the numbers are in geometric progression with common multiplier as :"<<r1;
        
    }else{
        cout<<"no, the numbers are not in GP";
    }
}