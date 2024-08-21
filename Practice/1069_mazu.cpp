// #include<bits/stdc++.h>
// using namespace std;
// char a[1010], b[1010];
// int main(){
//     int n, i, c=0;
//     scanf("%d", &n);
//     a[0] = 0;
//     for(i=0;i<n;i++){
//         scanf(" %c", &a[i]);
//         if(a[i]!=a[i-1]){
//             b[c] = a[i];
//             c++;
//         }
//     }
//     for(i=c;i>=0;i--){
//         printf("%c", b[i]);
//     }
// }

#include<bits/stdc++.h>
using namespace std;
stack <char> st;

int main(){
    int n;
    char a;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf(" %c", &a);
        if(!st.empty() && st.top()==a){
            st.pop();
        }
        else{
            st.push(a);
        }
    }
    printf("%d\n", st.size());
    if(st.empty()){
        printf("empty\n");
    }
    else{
        while(!st.empty()){
            printf("%c", st.top());
            st.pop();
        }
    }
    return 0;
}