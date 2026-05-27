//Print the sum of all even numbers up to n. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int sum = 0;
    for (int  i = 1 ; i <= num ; i ++){
        if(i % 2 == 0){
            sum += i;
        }
        
    }
    cout<<"sum of all even numbers upto n: "<<sum<<endl;
    return 0;
}
