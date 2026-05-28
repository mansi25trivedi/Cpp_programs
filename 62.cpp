//Print the sum of all odd numbers up to n. 
#include<iostream>
using namespace std;
int main(){
    int num , sum = 0;
    cout<<"enter any num: ";
    cin>>num;
    for(int  i = 1 ; i <= num ; i++){
        if( i%2 != 0){
            sum += i;
        }
    }
    cout<<"sum of only odd numbers is : "<<sum;
    return 0;
}