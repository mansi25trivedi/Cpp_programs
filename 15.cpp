//Input 10 numbers print them each on a new line if even 
#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter any 10 numbers:"; 
    for(int i=0 ; i < 10 ; i++){
        cin>>n;
        if( n % 2 == 0 ){
            cout<<n<<endl ;
        }
    }
return 0;
}