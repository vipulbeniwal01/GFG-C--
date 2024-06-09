#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    auto res = a<=>b;
    if(res<0)
    {
        cout<<"a is less"<<endl;
    }
    else if (res==0)
    {
        cout<<"a is equal to b"<<endl;
    }
    else
    {
        cout<<"a is greater than b"<<endl;
    }
    return 0;
}