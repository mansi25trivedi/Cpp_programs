//RECURSION BAED
#include<iostream>
using namespace std;
void printnum(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    printnum(n-1);
    cout<<n<<" ";

}
void printrenum(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printrenum(n-1);
}
int main(){
    cout<<"Print numbers from 1 to n using recursion."<<endl;
    int n;
    cout<<"enter any number: ";
    cin>>n;
    printnum(n);
    cout<<endl<<"Print numbers from n down to 1 using recursion."<<endl;
    printrenum(n);

}
