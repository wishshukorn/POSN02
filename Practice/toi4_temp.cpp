// #include<stdio.h>
// int main(){
//     int a, b, i, max=-1e8-100;
//     scanf("%d", &a);
//     scanf("%d %d", &i, &b);
//     for(i=0;i<a*a;i++){
//         scanf("%d", &b);
//         if(b>max && b!= 100){
//             max=b;
//         }
//     }
//     printf("%d", max);
// }

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MxN = 22;
int n, a[MxN][MxN], ans = -1e9-100;

const int di[] = {-1, 0, 0, 1};
const int dj[] = {0, -1, 1, 0};

void walk(int i, int j){
    ans = max(ans, a[i][j]);
    for(int k=0;k<4;k++){
        int next_i = di[k] + i;
        int next_j = dj[k] + j;
        
        if(next_i<1 || next_j<1 || next_i>n || next_j>n){               //เลยขอบไหม
            continue;
        }

        if(a[next_i][next_j] == 100 || a[next_i][next_j] <= a[i][j]){    //มากกว่า 100, น้อยกว่าตัวแรก
            continue;
        }

        walk(next_i, next_j);
    }
    // walk(i-1, j);
    // walk(i, j-1);
    // walk(i, j+1);
    // walk(i+1, j);
}

int main(){
    int st_x, st_y;                         // start x, start y
    scanf("%d %d %d ", &n, &st_y, &st_x);   // y array = แนวนอน, x array = แนวตั้ง
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    walk(st_x, st_y);
    printf("%d\n", ans);
    return 0;
}