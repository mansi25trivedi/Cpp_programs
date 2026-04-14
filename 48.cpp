//Take three numbers and print the median value (neither maximum nor minimum).
#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    if( (b>a && b<c)||(b>c && b<a)) {
        cout<<b;
    }else if((b>a && a>c)||(a<b && c>a))
    cout<<a;
    else
    cout<<c;
return 0;

}