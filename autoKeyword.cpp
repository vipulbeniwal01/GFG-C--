#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    auto a = 5;
    auto b = 2.13;
    cout<<typeid(a).name();
    return 0;
}