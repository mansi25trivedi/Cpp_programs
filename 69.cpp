//Print n Stars on Same Line
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;
    for(int i= 1; i<=n ; i++){
        cout<<"*";
    }
    cout<<endl;
    cout<<"Print Square of Stars (n x n Stars)"<<endl;
    for(int k=1 ; k<=n ; k++){
        for(int j =1 ; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"Print an Increasing Triangle of Stars"<<endl;
    for(int j=1 ; j<=n ; j++){
        for(int k=1; k<=j; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"Print a Right-Aligned Triangle of Stars"<<endl;
    for(int  i = 1 ; i <=n ; i++){
        for(int k=n-i ;k>=1 ; k--){
            cout<<" ";
        }
        for(int j = n-i+1 ; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"Print Stars in Even Numbers (2, 4, 6, 8, 10)"<<endl;
    for(int i = 1 ; i <=n ; i++){
        for (int j = 1; j<=i ; j++){
            cout<<"**";
        }
        cout<<endl;
    }

    cout<<endl<<" Print Stars in Odd Numbers (1, 3, 5, 7, 9)"<<endl;
    for(int i = 0 ; i <=n ; i++){
        for(int j=1 ; j<=(2*i + 1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"Print a Centered Pyramid of Stars "<<endl;
    for(int i = 0; i<=n; i++){
        for(int j=n-1-i; j>=0 ; j--){
            cout<<" ";
        }
        for(int k=0; k<=i ; k++){
            cout<<"*";
        }
        for(int x=0; x<i ; x++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<" Print Stars and Spaces Alternating (Stars and Blank Spaces)"<<endl;
    for(int i = 0; i<n ;i++){
        for(int j=n-1-i ; j>0 ;j--){
            cout<<" ";
        }
        for(int k=0 ; k<=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<" Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345) "<<endl;
    for(int i=1 ; i<=n ; i++){
        for(int j = 1 ; j <=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<" Print Repeated Numbers per Row (Same Number Repeated) "<<endl;
    for(int i = 1 ; i <=n;i++){
        for(int j=1 ; j<=i ; j++){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<endl<<"print the numbers in succesive order "<<endl;
    int c = 1;
    for(int i = 1; i <=n ; i++){
        for(int j =1 ; j<=i ; j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"print the numbers from 0 to 9 only ,in repetetion"<<endl;
    int num = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j= 1 ; j<=i ; j++){
            cout<<(num % 10)<<" ";
            num++;
        }
        cout<<endl;
    }

    cout<<endl<<"print the alternate pattern of 0 and 1 "<<endl;
    int n1=1;
    for(int i=0;i<n ; i++){
        for(int j = 0 ; j <=i ; j++){
            cout<<(n1%2)<<" ";
            n1++;
        }
        cout<<endl;
    }
    return 0;
}