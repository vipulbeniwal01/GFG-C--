#include<iostream>
using namespace std;

template<typename T>
T arrMax(T arr[],int n){
    T res=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>res){
            res = arr[i];
        }
    }
    return res;
}

int main(){
    int arr[]={1,2,3,4,9,5};
    int ans = arrMax<int>(arr,6);
    cout<<ans<<endl;
    return 0;
}