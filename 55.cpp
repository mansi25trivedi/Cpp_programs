// Take three numbers and check if they can form a Pythagorean triplet.
#include<iostream>
using namespace std;
int main(){
int a , b , c;
cout<<"enter the sides of the triangle you want to check : ";
cin>>a>>b>>c;
if( (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a) ){
  cout<<"yes , it a pythogorean triplet";
}else{
   cout<<"no , its not a pythogorean triplet ";
}
}
