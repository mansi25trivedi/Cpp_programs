//Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number between 0 - 9999 : ";
    cin>>num;
    int count = 0 , r , arr[4];
    while(num != 0){
        r = num % 10;
        num = num / 10;
        arr[count] = r;
        count++ ;
    }
    int sum = 0 , mul = 1 ;
    for( int i = 0 ; i <count - 1 ; i ++){
        sum += arr[i];
        mul *= arr[i];
    }
    if(sum >= mul){
        cout<<"sum is greater than product";
    }else{
        cout<<"product is greater than sum";
    }
    return 0;

}

