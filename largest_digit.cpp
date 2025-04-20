#include <iostream>
using namespace std;

int main(){
    int x, y, digit1, digit2, sum1=0, sum2=0;
    cout<<"enter any two number:"<<endl;
    cin>>x >>y;

    while(x!=0){
    digit1 = x%10;
    x= x/10;
    sum1 = sum1 + 1;
    }

    while(y!=0){
        digit2 = y%10;
        y= y/10;
        sum2 = sum2 + 2;
        }

        if(sum1>sum2)
        {
            cout<<"x have big digit"<<endl;
        }
        else if(sum1<sum2)
        {
            cout<<"y have big digit"<<endl;
        }
        else if(sum1==sum2)
        {
            cout<<"x and y have equal digit"<<endl;
        }
        else
        {
            cout<<"error"<<endl;
        }
        return 0;
}