#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"enter length of three sides:"<<endl;
    cin>>x >> y >> z;

    if(x==y && x==z && y==z){
        cout<<"tringle is equilateral"<<endl;
    }else if(x==y || x==z || y==z){
        cout<<"tringle is isosceles"<<endl;
    }else if(x!=y && x!=z && y!=z){
        cout<<"tringle is scalene"<<endl;
    }else {
        cout<<"error"<<endl;
    }
    return 0;
}