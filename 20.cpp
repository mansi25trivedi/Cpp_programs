//input number of days and convert it into years , weeks and months
#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"enter total number of days: ";
    cin>>days;
    int y , m , d;
    y = days / 365;
    m = (days % 365) / 30 ;
    d = (days % 365) % 30 ;
    cout <<"the respective number of years are : "<<y<<" months are: "<<m<<" days are : "<<d;
    return 0;
}