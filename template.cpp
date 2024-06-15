#include<iostream>
using namespace std;

template<typename T> 
T tmax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    int a, b;
    cin>>a>>b;
    int ans = tmax(a,b);
    cout<<ans<<endl;
    return 0;
}