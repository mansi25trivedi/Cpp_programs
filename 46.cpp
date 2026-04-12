//Take two angles of a triangle and compute the third angle.
#include<iostream>
using namespace std;
int main(){
    int a1 , a2, a3;
    cout<<"enter any two angles ofa triange";
    cin>>a1>>a2;
    if((a1+a2)<180){
        a3 = 180 - a1-a2;
        cout<<"the third angle is : "<<a3;

    }else cout<<"invalid or wrong input";

    return 0;
}