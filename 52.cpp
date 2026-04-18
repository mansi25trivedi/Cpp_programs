//Take a single digit (0–9) and print its word form (“Zero” to “Nine”).
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any single digit: ";
    cin>>num;
    switch(num){
        case 0: cout<<"Zero"; break;
        case 1: cout<<"one";  break;
        case 2: cout<<"two";  break;
        case 3: cout<<"three"; break;
        case 4: cout<<"four"; break;
        case 5: cout<<"five"; break;
        case 6: cout<<"six"; break;
        case 7: cout<<"seven"; break;
        case 8: cout<<"eight"; break;
        case 9: cout<<"nine"; break;
        default : cout<<"not  a single digit : invalid input";
    }
}