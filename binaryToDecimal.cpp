#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int binToDec(string str){
    int a = stoi(str);
    int ans=0;
    for(int i=0; i<str.length(); i++){
        ans = ans + ((a%10)*(pow(2,i)));
        a/=10;
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    int ans = binToDec(str);
    cout<<ans<<endl;
}