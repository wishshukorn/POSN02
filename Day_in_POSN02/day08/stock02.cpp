#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int minn = a[0], maxx = a[0];
    for(int i=1;i<n;i++){
        if(maxx < a[i]){
            maxx = a[i];
        }
        if(a[i] < a[i-1] || i == n-1){
            sum = sum + (maxx - minn);
            minn = a[i];
            maxx = a[i];
        }   
        if(minn > a[i]){
            minn = a[i];
        }
    }
    cout << sum << endl;
    return 0;
}