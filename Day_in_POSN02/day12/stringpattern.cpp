#include<bits/stdc++.h>
using namespace std;

string s,p;
int len_s;
int len_p;

int main()
{
    cin>>s>>p;
    len_s=s.size();
    len_p=p.size();
    vector<int> v(len_p+1,0);
    for(int i=len_s-1;i>=0;i--)
    {
        for(int j=0;j<len_p;j++)
        {
            if(p[j]==s[i])
                v[j]+=v[j+1];
        }
        if(s[i]==p[len_p-1])
            v[len_p-1]++;
    }
    printf("%d",v[0]);
    return 0;
}