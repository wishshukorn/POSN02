#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long int n, k;
    cin >> n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin >> a[n];
    }
    cin >> k;
    for(int i=0;i<n-k;i++){
        long long int maxx = -100000;
        for(int j=i;j<i+k;j++){
            maxx = max(maxx, a[j]);
        }
        cout << maxx << ' ';
    }
    return 0;

}