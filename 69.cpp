//Print n Stars on Same Line
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;
    for(int i= 1; i<=n ; i++){
        cout<<"*";
    }
    cout<<endl;
    cout<<"Print Square of Stars (n x n Stars)"<<endl;
    for(int k=1 ; k<=n ; k++){
        for(int j =1 ; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"Print an Increasing Triangle of Stars"<<endl;
    for(int j=1 ; j<=n ; j++){
        for(int k=1; k<=j; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}