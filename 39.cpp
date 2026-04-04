//Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number";
    cin>>num;
    int count = 0 , r ;
    while(num != 0){
        r = num % 10;
        num /= 10;
        count++; 
    }
    int arr[count];
    if(count == 3){
        int c = 0;
        while(num != 0){
            r = num % 10;
            num /= 10;
            arr[c] = r;
            c++;
        }
        for(int i = 0 ; i < c ; c++){
            if(arr[1]>arr[0] && arr[1]>arr[2]){
                cout<<"highest";
            }else if(arr[1]<arr[0] && arr[1]<arr[2]){
                cout<<"lowest";
            }else{
                cout<<"neither";
            }
        }
    }else{
        cout<<"the number entered is not 3 digit number";
    }

    return 0;
}