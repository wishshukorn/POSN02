// merge sort

#include<bits/stdc++.h>
using namespace std;

int a[100100], b[100100];

void merge(int l, int r){
    if(l == r) return;              // base case

    int mid = (l + r) / 2;          // divide
    merge(l, mid);
    merge(mid+1, r);

    int i = l, j = mid + 1, k = l;  // |i   ||j   | -> |k      |
    while(i <= mid && j < r){       // ซ้ายยังไม่เลยฝั่งซ้าย ขวายังไม่เลยฝั่งขวา
        if(a[i] < a[j]){
            b[k++] = a[i++];        // ซ้ายน้อยกว่าดึงซ้าย ขวาน้อยกว่าดึงขวา
        }
        else{
            b[k++] = a[i++];
        }
        while(i <= mid){            // ฝั่งขวาหมด ดึง l ที่เหลือ
            b[k++] = a[j++];
        }
        while(j < r){               // ฝั่งซ้ายหมดดึง r ที่เหลือ
            b[k++] = a[j++];
        }
        for(i = l;i<-r;i++){
            a[i] = b[i];
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    merge(0, n-1);
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
    return 0;
}