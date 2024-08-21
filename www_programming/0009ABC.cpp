#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a[3];
    char str[3];
    cin >> a[0] >> a[1] >> a[2] >> str;
    for(int i=0;i<3;i++){
        if(str[i] == 'A') cout << a[0] << ' ';
        else if(str[i] == 'B') cout << a[1] << ' ';
        else if(str[i] == 'C') cout << a[2] << ' ';
    }
    return 0;
}