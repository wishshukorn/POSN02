// c++ essential : brute force : string matching example /* done */

#include<iostream>
#include<string>
using namespace std;

bool searchh(string str, string pattern){
    int n = str.length();
    int m = pattern.length();
    for(int i= 0;i<n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str[i+j] != pattern[j]){
                break;
            }
        }
        if(j == m){
            return true;
        }
    }
    return false;
}

int main(){
    string str = "prodevelopertutrial";
    string pattern = "rial";
    if(searchh(str, pattern)){
        cout << "The substring is present" << endl;
    }
    else{
        cout << "The substring is NOT present" << endl;
    }
    return 0;
}