#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string s;
    int sum = 0;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            sum++;
        }
    }
    if(sum == s.length()){
        cout << "All Capital Letter";
    }
    else if(sum == 0){
        cout << "All Small Letter";
    }
    else{
        cout << "Mix";
    }
}