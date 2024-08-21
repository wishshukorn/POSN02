#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string word, pattern;
    cin >> word >> pattern;
    vector<int> v(pattern.size()+1, 0);

    for(int i=word.size()-1;i>=0;i--){
        for(int j=0;j<pattern.size();j++){
            if(pattern[j] == word[i]){
                v[j] = v[j] + v[j+1];
            }
        }
        if(word[i] == pattern[pattern.size()-1]){
            v[pattern.size()-1]++;
        }
        
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    // cout << v[0];
    return 0;

}