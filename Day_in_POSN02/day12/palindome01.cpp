#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str; 

    int n = str.size();
    string s1 = str;
    string s2 = str;

    reverse(s2.begin(), s2.end());
    s2 = str + '#' + s2;

    vector <int> addresss(s2.size());
    int i = 1;
    int j = 0;
    string extra;

    while(i < s2.size()){
        if(s2[i] == s2[j]){
            addresss[i] = j + 1;
            j++;
            i++;
        }
        else{
            if(j > 0){
                j = addresss[j - 1];
            }
            else{
                i++;
            }
        }
        extra = str.substr(addresss[addresss.size() - 1], n - addresss[addresss.size() - 1]);
        reverse(extra.begin(), extra.end());    
    }
    cout << extra + str;
    return 0;
}