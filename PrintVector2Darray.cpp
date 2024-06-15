#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr[], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<int> arr[m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i].push_back(i+1);
        }
    }
    print(arr,m,n);
    cout<<endl;
    return 0;
}