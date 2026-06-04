//check if a given number is palindrome or not
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter your num: ";
    cin>>num;
    int count=0 , r ,arr[100], onum;
    onum = num; 
    while(num!=0){
        r = num % 10;
        num /= 10;
        arr[count] = r;
        count++;
    }
    int ar[100];
    for(int i=0 ; i<count ;i++){
        ar[i] = arr[count-1-i];
    }
    int flag = 1;
    for(int j=0; j<count; j++){
        if(ar[j]!=arr[j]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout<<"it is a palindrome ";
    }else{
        cout<<"not a palindrome";
    }
  

    return 0;
}