#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int a[1010][1010] = {};
int minn = 1e9 +100, num = 0;

// void play(int savei, int savej)
// {
//     a[savei][savej] = 0;

//     for(int i=0;i<4;i++)
//     {
//         int next_x = savei + dx[i];
//         int next_y = savej + dy[i];
//         if(a[next_x][next_y] < a[savei][savej] || a[next_x][next_y] == 0)
//         {
//             continue;
//         }
//         //a[next_x][next_y] = 0;
//         play(next_x, next_y);
//     }
// }

int play(int i, int j){
    queue <pair<int, int>> q;
    int num = 0;

    q.push({i, j});             // queue เพิ่มตำแหน่ง
    a[i][j] = 0;             // ปรับค่าให้ = 0

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        num++;

        for(int k=0;k<4;k++){
            if(a[x + dx[k]][y + dy[k]] != 0 && a[x + dx[k]][y + dy[k]] > a[x][y]){
                q.push({x + dx[k], y + dy[k]});
                a[x + dx[k]][y + dy[k]] = 0;
            }
        }
    }

    return num;
}

int main()
{
    int m, n, savei, savej;
    cin >> m >> n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]!=0 && minn > a[i][j])
            {
                minn = a[i][j];
                savei = i;
                savej = j;
            }
        }
    }
    //cout << minn << endl << savei << ' ' << savej << endl;

    cout << play(savei, savej) << endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}