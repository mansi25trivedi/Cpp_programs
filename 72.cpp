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
int main(){
    cout<<"Print numbers from 1 to n using recursion."<<endl;
    int n;
    cout<<"enter any number: ";
    cin>>n;
    printnum(n);

}
