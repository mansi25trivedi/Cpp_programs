//take a number and print fizz if divisible by 3 , buzz if divisible by 5 and buzzzfizz if divisible by both
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any num:";
    cin>>num;
    if(num %15 == 0){
        cout<<"FizzBuzz";
    }else if(num % 3 == 0 && num % 5 != 0){
        cout<<"fuzz";
    }else if(num % 5 == 0 && num % 3 != 0){
        cout<<"buzz";
    }
    return 0;
}