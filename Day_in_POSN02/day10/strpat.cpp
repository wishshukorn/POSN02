#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, p;
    cin >> s >> p;
    string cpyp = p;
    for(int i=0;i<s.length();i++){
        if(p[i] == '*'){
            p.erase(p.begin() + i);
        }
        if(p[i] == '?'){
            p[i] = s[i];
        }
    }

    if(((s.find(p) != string::npos) == 1)){
        cout << s << " matches " << cpyp;
        return 0;
    }
    
    // for(int i=0;i<s.length();i++){
    //     if(s[i] != p[i] && p[i] != '?'){
    //         cout << s << " does not match " << p;
    //         return 0;
    //     }
    // }
    // if(s.length()!=p.length()){
    //     cout << s << " does not match " << p;
    //     return 0;
    // }
    cout << s << " does not match " << cpyp;
    return 0;
}

/*
EHHCFCABCEAEBHAAEHDFCCA
**AAFAF
*/