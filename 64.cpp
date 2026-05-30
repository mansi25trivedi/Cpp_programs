// Print the product of digits of a given number and count the number of digits
#include<iostream>
using namespace std;
int main(){
    int num;
    int mul = 1 , count = 0 , r ;
    cout<<"enter the num: ";
    cin>>num;
    while(num != 0){
        r = num % 10;
        num /= 10;
        count++;
        mul *= r;
    }
    cout<<"the count of digits is: "<<count<<endl;
    cout<<"the final product of the digits: "<<mul;
    return 0;

}