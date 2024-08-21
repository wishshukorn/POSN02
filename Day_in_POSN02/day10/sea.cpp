#include<bits/stdc++.h>
using namespace std;
int r,c;
int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1};
int land[2010][2010];
int maxx=0,ans=0;


int island(int i, int j)
{
    queue <pair<int,int>> q;
    int num=0;
    q.push({i,j});
    land[i][j]=0;
        while(!q.empty())
        {
            int x=q.front().first,y=q.front().second;
            q.pop();
            num++;
            for(int k=0;k<8;k++)
            {
                if(land[x+dx[k]][y+dy[k]]==1)
                {
                    q.push({x+dx[k],y+dy[k]});
                    land[x+dx[k]][y+dy[k]]=0;
                    /*
                    0 0 0 0
                    0 0 0 0
                    1 1 1 0
                    1 1 0 0
                    */
                }
            }
        }
    return num;
}

int main()
{
    cin >> r >> c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin >> land[i][j];
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(land[i][j]==1)
            {
                maxx=max(maxx,island(i,j));
            }
        }
    }
    cout << maxx << endl;
    return 0;
}
