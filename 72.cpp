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
void printevennums(int n){
    if(n == 1 || n == 0){
        cout<<0<<" ";
        return;
    }
    if(n%2==0){
        
        printevennums(n-2);
        cout<<n<<" ";
    }else{
        printevennums(n-1);
    }

}
void printoddnum(int n){
    if(n==0 || n==1){
        cout<<1<<" ";
        return;
    }
    if(n%2!=0){
        printoddnum(n-2);
        cout<<n<<" "; 
    }else{
        printoddnum(n-1);
    }
}
int main(){
    cout<<"Print numbers from 1 to n using recursion."<<endl;
    int n;
    cout<<"enter any number: ";
    cin>>n;
    printnum(n);
    cout<<endl<<"Print numbers from n down to 1 using recursion."<<endl;
    printrenum(n);
    cout<<endl<<"Print only even numbers from 1 to n recursively."<<endl;
    printevennums(n);
    cout<<endl<<"Print only odd numbers from 1 to n recursively"<<endl;
    printoddnum(n);

}
