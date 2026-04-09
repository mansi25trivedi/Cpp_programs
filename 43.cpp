//Take coordinates (x, y) and determine which quadrant the point lies in. 
#include<iostream>
using namespace std;
int main(){
    float x , y;
    cout<<"Enter the x and y coordinates: ";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"first quadrant";
    }else if(x<0 && y>0){
        cout<<"second quadrant";
    }else if(x<0 && y<0){
        cout<<"third quadrant";
    }else{
        cout<<"forth quadrant";
    }
    return 0;
}