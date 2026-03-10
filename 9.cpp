//greatest of the three numbers
#include<iostream>
using namespace std;
int  main(){
    float a , b, c;
    cout<<"enter any three numbers: ";
    cin>>a>>b>>c;
    cout<<"the greatest number is :";
    if(a>b && a>c)
    cout<<a;
    else if (b>a && b>c){
        cout<<b;
    }
    else
    cout<<c;

    if(a-b>0)cout<<a;
    else cout<<"  "<<b;
    return 0; 
}