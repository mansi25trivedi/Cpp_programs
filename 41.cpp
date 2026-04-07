//Check whether a given integer is single-digit, double-digit, or multi-digit.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any num: ";
    cin>>num;
    int count = 0 , r ;
    while(num != 0 ){
        r = num % 10;
        num /= 10;
        count++;
    }
    if(count == 1){
        cout<<"single digit  ";
    }else if(count== 2){
        cout<<"double digit  ";
    }else{
        cout<<"multi digit  ";
    }
    return 0;
}