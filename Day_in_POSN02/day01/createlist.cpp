#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> mylist = {12, 5, 10, 9};
    for (auto x : mylist){
        cout << x << '\n';
    }

}