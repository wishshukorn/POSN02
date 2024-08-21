#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int MxN = 66;
int n, m;
char a[MxN][MxN];
const int di[] = {-1, 0, 0, 1}, dj[] = {0, -1, 1, 0};

inline bool checkTree(int x_1, int y_1, int x_2, int y_2){
    for(int i=x_1; i<=x_2;i++){
        for(int j=y_1;j<=y_2;j++){
            if(a[i][j]=='T'){
                return true;
            }
        }
    }
    return false;
}

void fillSpace(int i, int j){
    b[i][j] = 'S';
    for(int k=0; k<4; k++){
        int next_i = di[k] + i;
        int next_j = di[k] + j;
        if(next_i<1 || next_j<1 || next_i>n || next_j>n){
            continue;
        }
        if(ิ[next_i][next_j] != 'P'){
            continue;
        }
        fillSpace(next_i, next_j);
    }

}

int countPound(int x_1, int y_1, int x_2, int y_2){
    int cnt = 0;
    for(int i=x_1; i<=x_2;i++){
        for(int j=y_1;j<=y_2;j++){
            if(a[i][j] != 'P'){
                continue;
            }
            fillSpace(i, j);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    scanf("%d %d", &m, &n);
    memccpy(b, a, sizeof a);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf(" %c", &b[i][j]);
        }
    }

    int max_size = min(n, m);   // square
    int min_pound = 1e9 + 100;
    bool done = false;

    for(int current_size = max_size; current_size>=1; current_size--){
        // (i, j) = bottom right of square
        for(int i=current_size; i<=n; i++){
            for(int j=current_size; j<=n; j++){
                if(checkTree(i-current_size+1, j-current_size+1, i, j)){      // upper left
                continue;
                }   // เน้นขนาดก่อนค่อยบ่อน้ำ
                done = true;
                int pound = countPound(i-current_size+1, j-current_size+1, i, j);
                min_pound = min(min_pound, pound);
            }
        }
        if(done){
            printf("%d %d\n", current_size * current_size, min_pound);
            return 0;
        }
    }
    printf("0 0");
    return 0;
}