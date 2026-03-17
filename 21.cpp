//input a year and print whether its a leap year or not 
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year you want to check ";
    cin>>year;
    if(year % 400){
        cout<< leap year
    }else{
        cout<"not a leap year"
    }
    return 0;
}