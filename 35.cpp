//check whether the given number is divisible by 3 and 5 both or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    if( n%3 == 0 && n%5 == 0){
        cout<<"it is divisible by both 3 and 5 ";

    }else{
        cout<<"noto divisible by both";
    }
    return 0;
}