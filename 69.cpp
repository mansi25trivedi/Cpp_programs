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
    cout<<endl<<"print the pattern of alphabests in succecive order"<<endl;
    char ch = 'A';
    for(int i = 0 ; i <=n ; i++){
        for(int j = 0; j <=i ; j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"print the succesive alphabetic pattern such that the alphabet remains same in each row"<<endl;
    char chh='A';
    for(int i=1 ; i<=n ; i++){
        for(int j =1 ; j<=i ; j++){
            cout<<chh<<" ";
        }
        chh++;
        cout<<endl;
    }
    cout<<endl<<"print the succcessive alphabet pattern for eachh new line"<<endl;
    for(int i = 0 ; i <=n ; i++){
        char ch = 'A';
        for(int j =0 ; j<=i ; j++){
            
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"prinnt the reverse succesive alphabet in reverse triangle"<<endl;
    char chhh='A';
    for(int i = 0 ; i <n ; i++){
        for(int j = n-1-i ; j >0; j--){
            cout<<" "<<" ";
        }
        for(int k = 0 ; k<=i ; k++){
            cout<<chhh++<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"centered no pyramid"<<endl;
    for(int i = 1 ; i <= n; i++){
        for(int j=n-1-i ; j>=0 ;j--){
            cout<<" ";
        }
        for(int k = 1; k<=i ; k++){
            cout<<k;
        }
        for(int l= i-1 ; l>=1 ; l--){
            cout<<l;
        }
        cout<<endl;
    }
    cout<<endl<<"upward and inveted triangle together"<<endl;
    for(int i = 0 ; i <n ; i++){
        for(int j = 0 ; j <=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = n-1 ; i>=1 ; i--){
        for(int j = i ; j>=1 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"inverted complete and upwardcompllete triangle together"<<endl;
    for(int i = 0 ; i <=n ; i++){
    for(int j = 0 ; j <= i ; j++){
    cout<<"* ";
       }
    cout<<endl;
    }
    for(int i = n ; i >=1 ; i--){
        for(int j = 0 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"diamond shape with stars"<<endl;
    //staight triangle
    for(int i = 0 ; i < n ; i++){
        //foro space
        for(int j = 0 ; j<(n-1)-i ;j++){
            cout<<"  ";
        }
        //for stars
        for(int j =0 ; j<=i ; j++){
            cout<<"* ";
        }
        //for other half of the triangle
        for(int j = i-1 ; j>=0 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted triangle
    for(int i = n-1 ; i>=1 ;i--){
        //for spaces
        for(int j = (n-1)-i ; j>=1 ; j--){
            cout<<"  ";
        }
        //for stars
        for(int j= i ; j>=0 ; j--){
            cout<<"* ";
        }
        //for other half of stars
        for(int j=i-1 ; j>=0 ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"triangle  pattern with numbers in reverse"<<endl;
    for(int i = n ; i>=1 ; i--){
        //for the spaces
        for(int j = 1 ; j<i;j++){
            cout<<"  ";
        }
        //for the numbers
        for(int j=n ; j>=i ; j--){
            cout<<j<<" ";
        }
        //for other half og the triangle
        for(int j=i+1 ; j<=n ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}