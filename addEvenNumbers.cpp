#include<iostream>
using namespace std;
int main(){
    int a = 1000;
    int sum = 0;
    for(int i=0; i<=a; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}