//RECURSION BASED
#include<iostream>
using namespace std;
void printnum(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    printnum(n-1);
    cout<<n<<" ";

}
void printrenum(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printrenum(n-1);
}
void printevennums(int n){
    if(n == 1 || n == 0){
        cout<<0<<" ";
        return;
    }
    if(n%2==0){
        printevennums(n-2);
        cout<<n<<" ";
    }else{
        printevennums(n-1);
    }
}
int sumofnums(int n){
    int sum = 0;
    if(n==0){
        return 0;
    }
    return n + sumofnums(n-1);
}
void printoddnum(int n){
    if(n==0 || n==1){
        cout<<1<<" ";
        return;
    }
    if(n%2!=0){
        printoddnum(n-2);
        cout<<n<<" "; 
    }else{
        printoddnum(n-1);
    }
}
int fac(int n){
    int mul = 1;
    if(n==0 || n ==1){
        return 1;
    }
    return n*fac(n-1);
}
int power(int num , int p){
    if(p==0){
        return 1;
    }
    return num*power(num,p-1);
}
int fibnum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibnum(n-2)+fibnum(n-1);
}
void fibonac(int n, int a, int b){
    if(n == 0){
        return ;
    }
    cout<<a<<" ";
    fibonac(n-1,b,a+b);
}
int sumd(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumd(n/10);
}
int countdigi(int n){
    if(n<10){
        return 1;
    }
    return 1 + countdigi(n/10);

}
void revnum(int n){
    if(n<=0){
        return;
    }
    cout<<n%10;
    revnum(n/10);
}
int prod(int n){
    if(n==0){
        return 1;
    }
    return n%10 * prod(n/10);
}
int main(){
    cout<<"Print numbers from 1 to n using recursion."<<endl;
    int n;
    cout<<"enter any number: ";
    cin>>n;
    printnum(n);
    cout<<endl<<"Print numbers from n down to 1 using recursion."<<endl;
    printrenum(n);
    cout<<endl<<"Print only even numbers from 1 to n recursively."<<endl;
    printevennums(n);
    cout<<endl<<"Print only odd numbers from 1 to n recursively"<<endl;
    printoddnum(n);
    cout<<endl<<"Print sum of first n natural numbers recursively."<<endl;
    cout<<sumofnums(n);
    cout<<endl<<"Print factorial of a number recursively"<<endl;
    cout<<fac(n);
    cout<<endl<<"Calculate power of a number (xⁿ) using recursion."<<endl;
    cout<<power(n,n);
    cout<<endl<<"Find nth Fibonacci number recursively"<<endl;
    cout<<fibnum(n);
    cout<<endl<<"Print Fibonacci series up to n terms recursively."<<endl;
    fibonac(n,0, 1);
    cout<<endl<<" Find sum of digits of a number recursively.: "<<sumd(n);
    cout<<endl<<"Count the number of digits in a number recursively. "<<countdigi(n);
    cout<<endl<<"reverse a number recursively: ";
    revnum(n);
    cout<<endl<<"Find products of digits of a number recursively :"<<prod(n);

}
