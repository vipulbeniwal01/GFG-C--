#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a = 132.23;
    cout<<fixed;
    cout<<a<<"\n";
    cout<<setprecision(3);
    cout<<a<<endl;
    float z = 1.2e+7;
    cout<<z<<endl;
    cout<<scientific;
    cout<<a<<endl;
}