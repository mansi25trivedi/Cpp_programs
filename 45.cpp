//Check if a number lies within the range [100, 999]. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    if(num>=100 && num<=999){
        cout<<"in range ";
    }else cout<<"not in range ";

    return 0;
}