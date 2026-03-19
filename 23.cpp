//Check whether input character is vowel or consonant.
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any character: ";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"character entered is a VOWEL";
    }else{
        cout<<"character entered is a CONSONANT";
    }
    return 0;

}