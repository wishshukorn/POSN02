// bubble sort making function /* not done */

#include<bits/stdc++.h>
using namespace std;

// swap

void swapp(int a, int b){
    int temp = a;
    a = b;
    b = a;
}

void bubblee(int a[], int b){
    for(int i=0;i<b-1;i++){
        for(int j=0;j<b-i-1;j++){
            if(a[j]>a[j+1]){
                swapp(a[j], a[j+1]);
            }
        }
    }
}

void bubbleee(int a[], int b){
    for(int i=0;i<b-1;i++){
        for(int j=0;j<b-i-1;j++){
            if(a[j]>a[j+1]){
                swapp(a[j], a[j+1]);
            }
        }
    }
}

void printt(int a[], int b){
    for(int i=0;i<b;i++){
        cout << a[i];
    }
    cout << endl;
}

int scann (int a){
    int b[a];
    for(int i=0;i<a;i++){
        cin >> b[i];
    }
    cout << endl;
    return b[a];
}

int main(){
    int a[3] = scann(3);
    printt()
}

/* https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm */

