//input from the user of km and then display them in meters and centimeters
#include<iostream>
using namespace std;
int main(){
    float km;
    cout<<"Enter km value:";
    cin>>km;
    float cm , m;
    m = 1000 * km;
    cm = m * 100;
    cout<<"the meter value is : "<<m<<" meters and centimeter value is : "<<cm<<" centimeters ";
    return  0;
}
