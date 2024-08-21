/* not done */

#include<bits/stdc++.h>
using namespace std;

int h[1000], ans = 1000;

int minn(int i, int j){
    ans =  min(ans, h[j]);
    if(i+1 == j){
        return ans;
    }
    return minn(i, j-1);
}

int main(){
    int n, area, tot = -1000;
    cin >> n;
    int h[n];

    for(int i=0;i<n;i++){
        cin >> h[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            area = minn(i, j) * j;
            tot = max(tot, area);
        }
    }

    cout << tot;
    return 0;
    
}