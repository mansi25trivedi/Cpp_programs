//Take a 3-digit number and check if all digits are distinct. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    int r , n1,n2, n3 , count = 0 , flag ;
    while(n != 0 ){
        r =  n%10;
        n /= 10;
        count++;
    }
    int arr[count];
    int c = 0;
    if(count == 3){
        while( n != 0){
            r = n%10;
            n/=10;
            arr[c] = r;
            c++;
        }
        for(int i = 0 ; i < count ; i++){
            for(int j = 0 ; j < count ; j++){
                if( i != j){
                    if(arr[i]==arr[j]){
                    flag = 0;
                    break;
                }else{
                    flag = 1;
                }
                }
            }
        }

        if(flag  == 0){
            cout<<" not distinct";
        }else{
            cout<<"distinct";
        }
        return 0;

    }

}