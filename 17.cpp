//input the cost price and selling price then dis[lay the profit or loss price
#include<iostream>
using namespace std;
int main(){
    float cp , sp ;
    cout<<"enter the cost price and selling price respectively: ";
    cin>>cp>> sp;
    if(cp>sp){
        cout<<"Loss is: "<<cp-sp;
    }else{
    cout<<"profit is: "<<sp-cp;
    }
    return 0;
}
