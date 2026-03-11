// display the given string from the user in uppercase
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: ";
    cin>>s;
    int i=0;
    while(s[i] != 0){
        s[i] = s[i] - 32;
        i++;
    }
    cout<<"the string is: "<<s;
    return 0;
}
