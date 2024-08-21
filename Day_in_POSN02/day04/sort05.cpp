// sorting b -> c -> a with bubble sort /* done */

#include<bits/stdc++.h>
using namespace std;

struct mystruct{
    int no;
    int a;
    int b;
    int c;
} mys[14];

bool abc(int x, int y){
    if(mys[x].b!=mys[y].b){
        return mys[x].b > mys[y].b;
    }

    if(mys[x].c!=mys[y].c){
        return mys[x].c > mys[y].c;
    }

    if(mys[x].a!=mys[y].a){
        return mys[x].a > mys[y].a;
    }

    return mys[x].no > mys[y].no;
}

int main(){
    for(int i=0;i<14;i++){
        cin >> mys[i].no >> mys[i].a >> mys[i].b >> mys[i].c;
    }

    for(int i=0;i<13;i++){
        for(int j=0;j<13-i;j++){
            if(abc(j, j+1)){
                swap(mys[j], mys[j+1]);
            }
        }
    }

    for(int i=0;i<14;i++){
        cout << mys[i].no << "\t" << mys[i].a << "\t" << mys[i].b << "\t" << mys[i].c << "\t" << endl;
    }
    return 0;
}

/*
1 1 1 4
2 3 1 1
3 4 4 4 
4 2 4 4
5 3 5 3
6 4 3 3 
7 1 3 3
8 2 4 3
9 3 3 5
10 1 5 3
11 1 1 4
12 4 1 1
13 5 2 3
14 3 5 2
*/