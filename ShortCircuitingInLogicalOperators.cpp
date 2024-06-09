#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 5;
    bool res = (a>6)&&(++a);
    cout<<res<<endl;
    cout<<a<<endl;
}