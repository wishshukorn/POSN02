/* ชั่งมัน */

#include<bits/stdc++.h>
using namespace std;

int shellSort(int arr[], int n){
    for(int gap = n/2; gap > 0; gap /= 2){
        for(int i = gap; i < n; i++){
            int temp = arr[i];
            for(int j = i; j >=gap && arr[j - gap] > temp; j = j - gap){
                arr[j] = arr[j - gap];
                arr[j] = temp;
            } 
        }
    }
    return 0;
}

int main(){
    int arr[] = {0, 4, 3, 6, 9, 1, 2};
    shellSort(arr, 2);
    for(int i=0;i<7;i++){
        cout << arr[i] << ' ';
    }
}