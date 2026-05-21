//Take two dates (day and month) and determine which one comes first in the calendar. 
#include<iostream>
using namespace std;
int main(){
    int d1 , m1, d2, m2;
    cout<<"Enter two dates with their respective month number ";
    cin>> d1>>m1>>d2>>m2;
    if(m1>m2){
        cout<<d2<<"/"<<m2<<" comes first";
    }
    else if(m1 == m2){
        if(d1>d2){
            cout<<d2<<"/"<<m2<<" comes first";
        }else{
            cout<<d1<<"/"<<m1<<" comes first";
        }
        
    }else{
        cout<<d1<<"/"<<m1<<" comes first";
    }
}
