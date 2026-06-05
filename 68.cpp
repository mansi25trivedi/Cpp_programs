//check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int r , i = 2, n=num, is_prime=0;
    
    while(i<num && is_prime==0){
        r = n % i;
        i++;        //r = 0  matlab remainder is zero which means kisi number se voh pura divisisible , which should not be true for a prime number 
        if(r == 0){
            is_prime = 1;
        }
    }
    if(is_prime == 1){
        cout<<"the number is not prime";
    }else{
        cout<<"it is a prime";
    }
}