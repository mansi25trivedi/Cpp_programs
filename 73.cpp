//STAR PRINTING Problem Through recursion and String based recursion 
#include<iostream>
using namespace std;
void squarestars(int n){
    int static n2 = n;
    if(n==0){
        return;
    }
    for(int i = 0 ; i < n2 ; i++){
        cout<<"* ";
    }
    cout<<endl;
    squarestars(n-1);
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<endl<<"Print a square of stars recursively (n×n). "<<endl;
    squarestars(n);
}