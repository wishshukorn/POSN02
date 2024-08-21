#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char showTable(int N);
int N;

int main(){

    srand(time(NULL));
    
    int x, y, p=0;
    printf("Enter N (NxN): ");
    scanf("%d", &N);

    int n[N][N];
    char m[N][N];

    for(int i=0;i<N;i++){
        for(int j=0; j<N; j++){
            n[i][j] = rand()%2;
            m[i][j] = '*';
        }
    }

    showTable(N);

    do{
        printf("Enter (x, y): ");
        scanf("%d %d", &x, &y);
        if(n[x][y] == 0){
            p++;
        }
        m[x][y] = n[x][y] + '0';

        showTable(N);

    }while (n[x][y] == 0);
    printf("\n---Game Over---\npoint = %d", p);
    
}

int n[N][N];
char m[N][N];

char showTable(int N){

    printf("  ");
    for(int i=0; i<N; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(int i=0; i<N; i++){
        printf("%d ", i);
        for(int j=0; j<N; j++){
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
}