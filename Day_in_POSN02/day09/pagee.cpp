/* done */

#include<bits/stdc++.h>
using namespace std;

int frame, num, a, ans = 0;
list <int> l;

int main(){
    cin >> frame >> num;
    for(int i=0;i<num;i++){
        cin >> a;
        auto address = find(l.begin(), l.end(), a); // address ที่หาได้
        if(address == l.end()){                     // ถ้าไม่เจอ
            if(l.size() == frame){
                l.pop_front();
            }
            ans++;
        }
        else{
            l.erase(address);
        }
        l.push_back(a);
    }
    cout << ans;
    return 0;
}