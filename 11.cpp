//input name from user and display thieir initials
#include<iostream>
using namespace std;
int main(){
    string f , l ;
    cout<< "enter your name: ";
    cin>>f >> l;
    cout<<"yor inintals are : "<<f[0]<<" "<<l[0] <<" "<<f.at(0)<<" "<<l.at(0);
    cout<<endl<<"also "<<f.front()<<" "<<l.front();
}