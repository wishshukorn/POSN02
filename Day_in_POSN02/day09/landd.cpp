#include<bits/stdc++.h>
using namespace std;

int n, m;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int land[1010][1010];
int maxx = 0, ans = 0;

int landd(int i, int j){
    queue <pair<int, int>> q;
    int num = 0;

    q.push({i, j});             // queue เพิ่มตำแหน่ง
    land[i][j] = 0;             // ปรับค่าให้ = 0

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        num++;

        for(int k=0;k<8;k++){
            if(land[x + dx[k]][y + dy[k]] == 1){
                q.push({x + dx[k], y + dy[k]});
                land[x + dx[k]][y + dy[k]] = 0;
            }
        }
    }

    return num;
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> land[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(land[i][j] == 1){
                maxx = max(maxx, landd(i, j));     // หา max area ทั้งหมด, ส่งค่าเป็นตำแหน่งที่ = 1;
            }
        }
    }

    cout << maxx << endl;
    return 0;
    
}