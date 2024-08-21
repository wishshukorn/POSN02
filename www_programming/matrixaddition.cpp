// 0003 matrix addition

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    long long int n, m;
    cin >> n >> m;
    long long int a[n][m], b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << (a[i][j] + b[i][j]) << ' ';
        }
        cout << endl;
    }
    return 0;
}