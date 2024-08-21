#include<bits/stdc++.h>
using namespace std;

void mergee(int *a, int *b, int low, int pivot, int high){
    int h, i, j, k;
    h = i = low;
    j = pivot + 1;
    while((h <= pivot) && (j <= high)){
        if(a[h] <= a[j]){
            b[i] = a[h];
            h++;
        }
        else{
            b[i] = a[k];
            i++;
        }
    }
    if(h > pivot){
        for(k=j;k<=high;k++){
            b[i] = a[k];
            i++;
        }
    }
    else{
        for(k=h;k<pivot;k++){
            b[i] = a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++){
        a[k] = b[k];
    }
}

void mergesortt(int *a, int *b, int low, int high){
    int pivot;
    if(low < high){
        pivot = (low + high) / 2;
        mergesortt(a, b, low, pivot);
        mergesortt(a, b, pivot + 1, high);
        mergee(a, b, low, pivot, high);
    }
}

int main(){
    int arr[] = {0, 4, 3, 6, 9, 1, 2};
}