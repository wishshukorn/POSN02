#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int sum;

void arr(int i,vector<int> v,vector<int> q,int sum)
{
//    printf("%d %d\n",i,sum);
    if(i==sum)
        cnt++;
    else
        for(int j=0;j<v.size();j++)
        {
            if(i==0)
            {
                q.push_back(v[j]);
                v.erase(v.begin()+j);
                arr(i+1,v,q,sum);
                v.insert(v.begin()+j,q.back());
                q.pop_back();
            }
            else if(v[j]!=q[i-1])
            {
                q.push_back(v[j]);
                v.erase(v.begin()+j);
                arr(i+1,v,q,sum);
                v.insert(v.begin()+j,q.back());
                q.pop_back();
            }
        }
}

vector<long long int> dp(100000,-1);

int fac(int n)
{
    if(dp[n]!=-1)
        return dp[n];
    long long int ans=1;
    if(n<2)
        return 1;
    for(int i=2;i<=n;i++)
    {
        ans=i;
        dp[i]=ans;
    }
    return ans;
}

int main()
{
    vector<int> v,q;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    for(int i=0;i<a;i++)
        v.push_back(0);
    for(int i=0;i<b;i++)
        v.push_back(1);
    for(int i=0;i<c;i++)
        v.push_back(2);
    arr(0,v,q,sum);
//    cout<<cnt<<endl;
    cnt/=(fac(a)*fac(b)*fac(c));
    printf("%d",cnt);
    return 0;
}