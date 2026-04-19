//Take a weekday number (1–7) and determine if it is a weekday or weekend.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any weekday num: ";
    cin>>num;
    if( num>0 && num <8){
        if(num == 6 || num == 7){
        cout<<"weekend";
    }else{
        cout<<"weekday ";
    }

    }else{
        cout<< "invalid weekday number entered";
    }
    
}