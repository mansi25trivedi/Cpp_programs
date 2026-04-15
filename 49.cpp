//Take 24-hour time (hours and minutes) and print whether it is AM or PM. 
#include<iostream>
using namespace std;
int main(){
    int hr , min;
    cout<<"enter the time in hr and min:";
    cin>>hr>>min;
    if(hr < 12){
        cout<<"AM";
    }else if(hr >= 12){
        cout<<"PM";
    }
    return 0;
}