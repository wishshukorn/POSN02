// make list with Grace /* not done */

#include<bits/stdc++.h>
using namespace std;

#define NUM 500

struct n1*{
    int data;
    int* next;
};

struct nodetype n1*[NUM];

typedef struct n1 *N1;

N1 gett(){
    n1* p;
    p = (N1) malloc(sizeof(struct N1));
    return p;
}

void freee(N1 p){
    free(p);
}

void inaf(N1 p, int x){     // หลังอะไร, data ที่จะเพิ่ม
    N1 q;                   // สร้าง node q เปล่า ๆ
    if(p == NULL){          // check node ที่จะเพิ่ม
        printf("void\n");
        exit(1);            // exit(1) = exit,  exit(0) = not exit
    }
    q = gett();             // ขอพื้นที่
    q -> data = x;          // q data = x
    
    q -> next = p -> next;  // q ชี้ไปที่ node p next
    p -> next = q;

}