#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    char str[10010];
    cin >> str;
    int i = 0, capital = 0, small = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            capital = 1;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            small = 1;
        }
        i++;
    }
    if(capital == 1 && small == 1){
        cout << "Mix";
    }
    else if(capital == 1 && small == 0){
        cout << "All Capital Letter";
    }
    else if(capital == 0 && small == 1){
        cout << "All Small Letter";
    }
    return 0;
}