//Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any alphabet : ";
    cin>>c;
    if(c>=65 || c<=90 || c>=97 || c<=122){
        if(c>=65 || c<=77 || c >=97 || c<=109){
            cout<<"alphabet is between a - m ";
        }else{
            cout<<"alphabet is between n - z";
        }
    }else{
        cout<<"not an alphabet";
    }
    return 0;

}