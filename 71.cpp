//Print all numbers whose sum of digits is even (1–100)
#include<iostream>
using namespace std;
int main(){
    int n;
    for(int n = 1 ; n <=100 ; n++){
        int sum = 0, r;
        int i = n;
        while(i !=0){
            r = i % 10;
            i/=10;
            sum+=r;

        }
        if(sum % 2 == 0){
            cout<<n<<" ";
        }


    }
    return 0;
}