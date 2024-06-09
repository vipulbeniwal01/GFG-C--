#include<iostream>
using namespace std;
int main(){
    int currentDay, numberOfDays;
    cin>>currentDay>>numberOfDays;
    int a = numberOfDays%7;
    int ans = currentDay-a;
    if(ans>=0){
        cout<<ans<<endl;
    }
    else{
        cout<<7+ans<<endl;
    }
}