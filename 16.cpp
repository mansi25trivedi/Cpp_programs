// Input age and print “Teenager” or “Not a Teenager”.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any age: ";
    cin>>n;
    if(13<= n && n<=19){
        cout<<"teenager";
    }else{
        cout<<"not a teenager";
    }
return 0;
}