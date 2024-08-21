#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
int w;
int sum=0,cnt=0;

int fnd(int i)
{
    if(i<0)
        return 0;
    for(int j=i;j>=0;j--)
    {
        sum+=v[j];
        if(sum==w)
            cnt++;
        if(sum<w)
            fnd(j);
        sum-=v[j];
    }
    return 0;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        v.push_back(x);
    }
    scanf("%d",&w);
    fnd(n-1);
    printf("%d",cnt);
    return 0;
}