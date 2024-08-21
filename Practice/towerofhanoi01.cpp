#include<bits/stdc++.h>
void TOH (int n, int A, int B, int C){          //แถว 3
    if(n>0){
        TOH(n-1, A, C, B);
        printf("disk %d : %d -> %d\n",n , A, C);
        TOH(n-1, B, A, C);
    }
}

void tower (int n, char a, char b, char c){     // แถว 2
    if(n==1){
        printf("disk 1 : %c -> %c\n", a, b);
        return;
    }
    tower(n-1, a, c, b);
    printf("disk %d : %c -> %c\n", n, a, b);
    tower(n-1, c, b, a);
}

int main(){
    TOH(4,1,2,3);
    printf("\n");
    tower(4, 'a', 'b', 'c');
}
