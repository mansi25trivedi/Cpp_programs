//Check if a number is a multiple of 7 or ends with 7
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number: ";
    cin>>num;
    int count = 0 , c = 0 , r;
    while(num != 0){
        r = num % 10;
        num /= 10;
        count++;
    }
    int arr[count];
    while(num != 0){
        r = num % 10;
        num /= 10;
        arr[c] = r;
        c++;
    }
    if( num % 7 == 0 || arr[count - 1] == 7){
        cout<<"satisfied  ";
    }else{
        cout<<"not satisfied  ";
    }
    return 0;
}