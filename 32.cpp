#include<iostream>
using namespace std;
int main(){
    int total , obtained,     p;
    cout<<"enter the total marks:";
    cin>>total;
    cout<<"enter obtained marks: ";
    cin>>obtained;
    p = (obtained *100) / total;
    cout<<"the percentage obtained is: "<<p<<"%";
    return 0;

}