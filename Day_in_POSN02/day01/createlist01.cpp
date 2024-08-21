// create list

#include<iostream>
#include<list>

int main(){
    std::list <int> mylist = {12, 5, 10, 9};
    for(int x : mylist){
        std:: cout << x << '\n';
    }
}