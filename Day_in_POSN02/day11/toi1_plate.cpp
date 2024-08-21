#include<bits/stdc++.h>
using namespace std;

int id[10010];

int main(){
    int n, m, a, b;
    char com;
    queue <int> q, qsmall[11];
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        id[b] = a;
    }
    while(1){
        cin >> com;
        if(com == 'E'){
            cin >> a;
            b = id[a];
            if(qsmall[b].empty()){
                q.push(b);
            }
            qsmall[b].push(a);

        }
        else if(com == 'D'){
            if(q.empty()){
                cout << "empty" << endl;
            }
            else{
                cout << qsmall[q.front()].front() << endl;
                qsmall[q.front()].pop();
                if(qsmall[q.front()].empty()){
                q.pop();
                }
            }
        }
        else if(com == 'X'){
            cout << 0;
            return 0;
        }
    }
}