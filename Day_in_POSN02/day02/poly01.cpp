// polynomial with array /* done */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1[] = {5, 4, 2};
    int up1[] = {2, 1, 0};
    int num2[] = {-5, -5};
    int up2[] = {1, 0};
    int i=0, j=0, sum=0;

    while(up1[i-1] != 0){
        if(up1[i]==up2[j]){
            sum = num1[i] + num2[j];
            cout << sum << "\t"<< up1[i] << endl;
            i++;
            j++;
        }else{
            sum = num1[i];
            cout << sum << "\t" << up1[i] << endl;
            i++;
        }
    }
    return 0;
}