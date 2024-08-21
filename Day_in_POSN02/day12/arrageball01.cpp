#include<bits/stdc++.h>
using namespace std;

int sum, ans = 0;
vector<long long int> dp(100100, -1);

void count(int num, vector<int> v1, vector<int> v2, int sum){
    if(num == sum){
        ans++;
    }
    else{
        for(int j=0;j<v1.size();j++){
            if(num == 0 || v1[j] != v2[num-1]){
                v2.push_back(v1[j]);
                v1.erase(v1.begin() + j);
                count(num + 1, v1, v2, sum);
                v1.insert(v1.begin() + j, v2.back());
                v2.pop_back();
            }
        }
    }
}

int same(int n){
    long long int result = 1;
    if(dp[n] != -1){
        return dp[n];
    }
    if(n < 2){
        return 1;
    }
    for(int i=2;i<=n;i++){
        result = i;
        dp[i] = result;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int> v1, v2;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;

    for(int i=0;i<a;i++){
        v1.push_back(0);
    }
    for(int i=0;i<b;i++){
        v1.push_back(1);
    }
    for(int i=0;i<c;i++){
        v1.push_back(2);
    }
    count(0, v1, v2, sum);
    ans = ans / (same(a)*same(b)*same(c));
    printf("%d", ans);
    return 0;

}