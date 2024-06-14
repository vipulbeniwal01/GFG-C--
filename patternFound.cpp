#include<iostream>
#include<string>
using namespace std;

void pattern(string str, string patt){
    int found = str.find(patt);
    while(found != string::npos){
        cout<<"Pattern found at "<<found<<endl;
        found = str.find(patt, found+1);
    }
}

int main(){
    string str, patt;
    cin>>str;
    cin>>patt;
    pattern(str, patt);
}