//Print the squares of numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num form which you want the squares: ";
    cin>>num;
    for(int i = 1 ; i <= num ; i++){
        cout<<i*i<<endl;
    }
    cout<<"for cubes: ";
    for(int i = 1 ; i <= num ; i++){
        cout<<i*i*i<<endl;
    }
    return 0;
}