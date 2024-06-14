#include<iostream>
using namespace std;

void palindrome(string str){
    int flag = true;
    for(int i=0; i<str.length()/2; i++){
        if(str[i]!=str[str.length()-i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes, this is palindrome"<<endl;
    }
    else{
        cout<<"No, this is not palindrome"<<endl;
    }
}

int main(){
    string str;
    cin>>str;
    palindrome(str);
}