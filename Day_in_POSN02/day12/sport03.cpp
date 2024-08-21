#include<bits/stdc++.h>
using namespace std;

int k, a, b;

void printwl(int a, int b, string str){
    if(a == k || b == k){
        cout << str << '\n';
        return;
    }
    else{
        printwl(a + 1, b, str + "W ");
        printwl(a, b + 1, str + "L ");
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> k >> a >> b;
    printwl(a, b, "");
    return 0;
}