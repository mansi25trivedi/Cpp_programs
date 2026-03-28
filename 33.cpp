//check if a triangle accepts triangle inequality or not
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of the triangle: ";
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"This is a valid triangle";
    }else{
        cout<<"Its not a triangle";
    }
    return 0;
}
