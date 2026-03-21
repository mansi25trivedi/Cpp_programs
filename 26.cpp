//11.	Convert character digit (‘5’) to integer 5.
#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter any number: ";
    cin>>n;
    int n1 = (int)n;
    cout<<"when added to 5 : answer is "<<5 + n<<endl<<"again : "<<n1+ 5;
    return 0;
}