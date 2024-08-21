#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int sum = 0, cnt = 0, money;

int play(int n){
    if(n < 0){
        return 0;
    }
    for(int i=n;i>=0;i--){
        sum = sum + v[i];
        if(sum == money){
            cnt++;
        }
        if(sum < money){
            play(i);
        }
        sum = sum - v[i];
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        v.push_back(j);
    }
    cin >> money;
    play(n - 1);
    cout << cnt;
    return 0;
}