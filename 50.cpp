//Take income and age, and check if eligible for tax (age > 18 and income > 5 L). 
#include<iostream>
using namespace std;
int main(){
    float income;
    int age;
    cout<<"enter the income and age of the candidate";
    cin>>income>>age;
    if(age > 18 && income > 5){
        cout<<"eligible for tax";
    }else
    cout<<"not eligible for tax";
    return 0;
}