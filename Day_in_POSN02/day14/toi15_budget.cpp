#include<bits/stdc++.h>
using namespace std;

int ptr[50000];
vector<pair<int,pair<int,int>>> v;
vector<pair<int,int>> cost;
long long int sum = 0;

int fnd(int i){
    if(ptr[i] == i){
        return i;
    }
    else{
        return fnd(ptr[i]);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int b, e;
    cin >> b >> e;
    for(int i=0;i<b;i++){
        ptr[i] = i;
    }
    for(int i=0;i<e;i++){
        int s, t, l, r;
        cin >> s >> t >> l >> r;
        if(r == 0){
            v.push_back({l, {s, t}});
        }
        if(r == 1){
            ptr[fnd(t)] = fnd(s);
        }
    }
    sort(v.begin(), v.end());

    int p;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        int c, d;
        cin >> c >> d;
        cost.push_back({d, c});
    }
    sort(cost.begin(), cost.end());
    for(auto it:v){
        int L = it.first;
        int a = fnd(it.second.first);
        int b = fnd(it.second.second);
        if(a != b){
            for(int k=0;k<p;k++){
                if(cost[k].second >= L)
                {
                    sum = sum + cost[k].first;
                    break;
                }
            }
            ptr[b]=a;
        }
    }
    cout << sum;
    return 0;
}