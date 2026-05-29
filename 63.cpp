//Print the factorial of a given number. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num: ";
    cin>>num;
    int fact = 1 ;
    for(int i = 1 ; i <= num ; i++){
        fact *= i;
    }
    cout<<"the factorial is :"<<fact<<endl;
    return 0;
}