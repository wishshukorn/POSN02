#include<bits/stdc++.h>
using namespace std;


// /
// int k, w, l;
// string str;

// void rec(int n1, int n2){
//     if(n1 + w == k || n2 + l == k){
//         cout << str << '\n';
//     }
//     else{
//         str = str + "W ";
//         rec(n1 + 1, n2);
//         str.pop_back();
//         str.pop_back();
        
//         str = str + "L ";
//         rec(n1, n2 + 1);
//         str.pop_back();
//         str.pop_back();
//     }
// }

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);
//     cin >> k >> w >> l;
//     rec(0, 0);
//     return 0;
    
// }


// X
// int k, w, l;
// string str;

// void rec(int w, int l){
//     if(w == k || l == k){
//         cout << str << '\n';
//         return ;
//     }
//     str.push_back('W');
//     str.push_back(' ');
//     rec(w + 1, l);
//     str.push_back('L');
//     str.push_back(' ');
//     rec(w, l + 1);
//     return ;
// }

// int main(){
//     cin >> k >> w >> l;
//     rec(w, l);
//     return  0;
// }

int k, a, b;

void printans(int a, int b, string ans){
    if(a == k || b == k){
        cout << ans << '\n';
        return;
    }
    else{
        printans(a+1, b, ans + "W ");
        printans(a, b+1, ans + "L ");
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> k >> a >> b;
    printans(a, b, "");
    return 0;
}

