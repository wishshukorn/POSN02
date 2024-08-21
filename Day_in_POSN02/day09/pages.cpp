/* done */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, ans = 0;
    cin >> n >> m;
    list <int> l;
    for(int i=0;i<m;i++){
        cin >> a;
        auto adds = find(l.begin(), l.end(), a);
        if(adds == l.end()){
            if(l.size() == n){
                l.pop_front();
            }
            ans++;
        }
        else{
            l.erase(adds);
        }
        l.push_back(a);
    }
    cout << ans;
    return 0;
}