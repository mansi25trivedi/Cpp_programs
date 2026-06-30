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

    //Print factorial of each number from 1 to n
    cout<<endl<<"Print factorial of each number from 1 to n"<<endl;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        int mul = 1;
        int ik = i;
        while(ik != 0){
            mul *= ik;
            ik--;
        }
        cout<<"Factorial of "<<i<<" is "<<mul<<endl;
    }

    cout<<endl<<"Find the smallest and largest digit in a given number."<<endl;
    int num;
    cout<<"enter any number: ";
    cin>>num;
    int i = num , ct = 0;
    while(i != 0){
        int r = i % 10;
        i  /= 10;
        ct++;
    }
    int arr[ct];
    int s = num , j = 0;
    while( j != ct){
        int p = s % 10;
        s /= 10;
        arr[j]=p;
        j++; 
    }
    int max = arr[0],minn = arr[0];
    for(int i = 0 ; i<ct; i++){
        if(max<=arr[i]){
            max = arr[i];
        }
        if(minn>=arr[i]){
            minn = arr[i];
        }
    }
    cout<<"max element is "<<max<<" and min element is "<<minn<<endl;
    
    return 0;
}