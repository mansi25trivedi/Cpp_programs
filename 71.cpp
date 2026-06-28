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

    //Count how many numbers between 1–500 are divisible by 7 but not by 5. 
    cout<<endl<<"Count how many numbers between 1–500 are divisible by 7 but not by 5. "<<endl;
    int count = 0;
    for(int i = 1 ; i<=500 ; i++){
        if(i%7 == 0 && i%5 !=0){
            count++;
        }
    }
    cout<<"the count is : "<<count<<endl;
    return 0;
}