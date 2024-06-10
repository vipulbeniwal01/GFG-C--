#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b = a%10;
    if(b<0){
        cout<<b*(-1)<<endl;
    }
    else{
        cout<<b<<endl;
    }
    return 0;
}