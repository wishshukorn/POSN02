// polynomial with linked-list /* not done */

#include<bits/stdc++.h>
using namespace std;

struct s1{
    int num[3] = {5, 4, 2};
    int up[3] = {2, 1, 0};
    struct s1 *next;
};

struct s2{
    int num[2] = {-5, -5};
    int up[2] = {1, 0};
    struct s2 *next;
};

int main(){
    struct s1 *h1;
    struct s2 *h2;
    int i=0, j=0, sum=0;
    while(h1->up[i] != 0){
        if(h1->up[i] == h1->up[j]){
            sum = 0;
            sum = h1->num[i] + h2->num[j];
            cout << sum << endl;
            i++;
            j++;
        }else{
            sum = 0;
            sum = h1->num[i];
            cout << sum << endl;
            i++;
        }
    }
}