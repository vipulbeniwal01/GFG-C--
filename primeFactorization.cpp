#include<iostream>
using namespace std;

void pfact(int n){
    if(n==1)
    return;
    int i;
    for(i=2; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }
    pfact(n/i);
}

int main(){
    int n;
    cin>>n;
    pfact(n);
}