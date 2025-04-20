#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x, y;
    cout<<"enter any number:"<<endl;
    cin>> x;
    
    y=sqrt(x);
    cout<<"\n"<<y<<endl;
    if(y*y==x){
        cout<<"perfect square"<<x<<endl;
    }else{
        cout<<"not perfect square"<<x<<endl;
    }
    return 0;
}