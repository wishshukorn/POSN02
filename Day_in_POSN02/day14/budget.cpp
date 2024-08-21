#include<bits/stdc++.h>
using namespace std;

int n, m, s, t, l, h, k, co, a[3010], pa[1000100], cnt = 0, ans = 0;
vector<pair<int,pair<int,int>>> v;
vector<pair<int,int>> save;
vector<int> num;

int ch(int x)
{
    if(a[x]==x) return x;
    else return a[x]=ch(a[x]);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) a[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>s>>t>>l>>h;
        if(h==1)
        {
            a[ch(s)]=ch(t); cnt++;
        }
        else
        {
            v.push_back({l,{s,t}});
        }
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>l>>co;
        save.push_back({co,l});
    }
    sort(save.begin(),save.end());
    for(int i=1;i<k;i++)
    {
        if(save[i-1].second>save[i].second)
        {
            save[i].second=save[i-1].second;
         }
    for(int i=0;i<k;i++)num.
    push_back(save[i].second);
    sort(v.begin(),v.end());
    for(i=0;i<m-cnt;i++)
    {
        int x=ch(v[i].second.first),y=ch(v[i].second.second);
        if(x!=y)
        {
            a[x]=y;
            int ku=lower_bound(kk.begin(),kk.end(),v[i].first)-kk.begin();
            ans+=pack[ku].first;
        }
    }cout<<ans;
    }

}