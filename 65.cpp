//Print the reverse of a given number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your num: ";
    cin>>num;
    int count = 0, r,arr[10] ;
    while(num != 0){
        r = num % 10;
        num = num / 10;
        arr[count] =r;
        count++;
    }
    cout<<"the number of digits in given number is : "<<count<<endl;
    
    cout<<"reverse number is: ";
    for(int k = 0 ; k<count ; k++){
        cout<<arr[k];
    }

    cout<<endl<<"the original number is : ";
    for(int j = count-1 ; j>=0 ; j--){
        cout<<arr[j];
    }
    return 0;

}