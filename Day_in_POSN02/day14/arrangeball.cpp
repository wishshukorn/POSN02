#include<bits/stdc++.h>
using namespace std;

int r, w, g, all, maxx, ans;
vector<vector<vector<int>>> dp;

int play(int r, int w, int g, int all)
{
    int cnt = 0;
    if(all == 0)
    {
        return 1;
    }
    if(dp[r][w][g] != -1)
    {
        return dp[r][w][g];
    }
    if(r != 0)
    {
        cnt = cnt + play(g, w, r - 1, all - 1);
    }
    if(w != 0)
    {
        cnt = cnt + play(r, g, w - 1, all - 1);
    }
    return dp[r][w][g] = cnt;
}

int main()
{
    cin >> r >> w >> g;
    all = r + w + g;
    maxx = max(r, max(w, g)) + 1;
    dp.resize(maxx, vector<vector<int>>(maxx, vector<int>(maxx, -1)));
    if(r!=0)
    {
        ans = ans + play(g, w, r - 1, all - 1);
    }
    if(w!=0)
    {
        ans = ans + play(r, g, w - 1, all - 1);
    }
    if(g!=0)
    {
        ans = ans + play(r, w, g - 1, all - 1);
    }
    cout << ans;
    return 0;
}