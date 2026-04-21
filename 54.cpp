//take a password string and check basic rules (lenght >=8 and atleast one digit)
#include<iostream>
using namespace std; 
int main(){
    string s;
    cout<<"enter your password: ";
    cin>>s;
    int f1 , f2 ;
    int l = s.length();
    if(l >= 8){
        f1 = 0;
    }
    for (int i = 0; i < l; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            f2 = 0;
        }
    }
    if(f1 == 0 && f2 == 0){
        cout<<"valid password";
    }else{
        cout<<"invald password";
    }
    
}