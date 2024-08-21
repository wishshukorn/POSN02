#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int a[1010][1010] = {};
int t, te;


int main(){
    int n, m, num, ans = 0;
    cin >> n >> m;

    //int a[n][m];
    queue <pair<int, int>> q;

    for(int i=0;i<n;i++){
        te = 0;
        cin >> t;
        while(te!=m){
            a[i][m-te-1] = t%10;
            t = t/10;
            te++;
       }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 1){
                num = 0;
                q.push({i, j});
                a[i][j] = 0;

                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int k=0;k<8;k++){
                        if(a[x + dx[k]][y + dy[k]] == 1){
                            q.push({x + dx[k], y + dy[k]});
                            a[x + dx[k]][y + dy[k]] = 0;
                            num = 1;
                        }
                    }
                }

                ans = ans + num;
            }
        }
    }
    cout << ans;
    return 0;
}
        
    

    
