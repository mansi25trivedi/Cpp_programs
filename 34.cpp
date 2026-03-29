// Check whether input character is vowel or consonant.
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any alphabet here: ";
    cin>>c;
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"it is a VOWEL"<<endl;
    }else{
        cout<<"It is a CONSONANT "<<endl;
    }
    return 0;
}