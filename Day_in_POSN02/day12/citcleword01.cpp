#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string ss;
    
    cin >> n;
    char b[n], c[n];
    
    for(int i=0;i<n;i++){
        cin >> ss;
        b[i] = ss[0];
        c[i] = ss[ss.length() - 1];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i] == c[j]){
                c[j] = '\0';
                b[i] = '\0';
            }
        }
    }

    for(int i=0;i<n;i++){
        if(c[i] != '\0' || b[i] != '\0'){
            cout << "The given words cannot be rearranged";
            return 0;
        }
    }
    cout << "The given words can be rearranged";
    return 0;
        
}