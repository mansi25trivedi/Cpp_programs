//declare const variable and use them
#include<iostream>
using namespace std;
int main(){
    const float pi = 3.14;
    float r;
    cout<<"enter radius of circle: ";
    cin>>r;
    cout<<"perimeter : "<<2*pi*r<<endl<<"area : "<<pi*r*r;
    return 0;

}