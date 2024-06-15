#include<iostream>
#include<vector>
using namespace std;
int main(){

    int m, n, p;
    cin >> m >> n >> p;

    vector<vector<int> > arr1(m, vector<int> (n, 0));
    vector<vector<int> > arr2(n, vector<int> (p, 0));
    vector<vector<int> > ans(m, vector<int> (p, 0));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr1[i][j] = i + 1; // Initialize arr1 with i+1
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            arr2[i][j] = i + 1; // Initialize arr2 with i+1
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            ans[i][j] = 0;
            for(int a = 0; a < n; a++){
                ans[i][j] += arr1[i][a] * arr2[a][j]; // Correct matrix multiplication
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl; // Print a newline after each row
    }

    return 0;
}