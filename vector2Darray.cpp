#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    vector<int> arr[m];
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            arr[j].push_back(10);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}