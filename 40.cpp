//Take a 4-digit number and check if the first and last digits are equal. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any digit: ";
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

    if(count == 4){
        if(arr[0] == arr[3]){
            cout<<"the first and last diagit is same ";
        }else{
            cout<<"no the first and ast digit is not same";
        }
    }else{
        cout<<"not a 4 digit num";
    }
    return 0;
}