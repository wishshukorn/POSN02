/* not done */

#include<bits/stdc++.h>
using namespace std;

int h[1000];

int minn(int a, int b){
    if(a+1 == b){
        return min(h[a], h[b]);
    } 
    return minn(h[a], h[b]);


}

int main(){
    int n, area, ans = -1000, a;
    cin >> n;
    int h[n];

    for(int i=0;i<n;i++){
        cin >> h[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(h[j]> h[i]){
                minn = h[i];
                a = min(minn, h[j]);
            }
            else{
                minn = h[j];
                a = min(minn, h[i]);
            }
            area = a * j;
            ans = max(ans, area);
        }
    }

    cout << ans;
    return 0;
    
}