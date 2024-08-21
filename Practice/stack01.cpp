#include<bits/stdc++.h>
using namespace std;
stack <pair<int, int>> st;
int ans[100100];

int main(){
    int n, i, num;
    scanf("%d", &n);
    memset(ans, -1, sizeof ans);
    for(i=0;i<n;i++){
        scanf("%d", &num);
        while(!st.empty() && st.top().first<num){
            ans[st.top().second] = num;
            st.pop();
        }
        st.push({num, i});
    }
    for(i=0;i<n;i++){
        printf("%d", ans[i]);
    }
}
