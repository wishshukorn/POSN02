#include<bits/stdc++.h>
using namespace std;
int id[10010];
queue <int> qroom, qstd[20];        //queue ใหญ่, queue เล็ก

int main(){
    int n, m, a, b;
    char opr;
    scanf("%d %d", &n, &m);
    while(m--){
        scanf("%d %d", &a, &b);
        id[b] = a;
    }
    while(1){
        scanf(" %c", &opr);
        if(opr == 'E'){
            scanf("%d", &a);
            b = id[a];              // b = ห้อง
            if(qstd[b].empty()){
                qroom.push(b);
            }
            qstd[b].push(a);
        }
        else if(opr == 'D'){
            if(qroom.empty()){
                printf("empty\n");
            }
            else{
                b = qroom.front();
                printf("%d\n", qstd[b].front());
                qstd[b].pop();
                if(qstd[b].empty()){
                    qroom.pop();
                }
            }
        }
        else{
            printf("0\n");
            return 0;
        }
    }
    return 0;
}