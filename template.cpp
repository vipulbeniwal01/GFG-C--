#include<iostream>
using namespace std;
// #myMax2(x,y) (x>y)?(x):(y) 
//these are called macros in C++ which applies in the code blindly

template<typename T> 
T tmax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    int a, b;
    cin>>a>>b;
    int ans = tmax(a,b);
    cout<<ans<<endl;
    cout<<tmax<char>('a','b')<<endl;
    return 0;
}