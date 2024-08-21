#include<iostream>
#include<list>
int main(){
    std::list <int> mylist = {12, 5, 10, 9};
    mylist.push_back(11);
    mylist.push_back(18);
    auto i = std::find(mylist.begin(), mylist.end(), 10);
    if(i!=mylist.end()){
        mylist.insert(i, 21);
    }
    for(int x : mylist){
        std::cout << x << '\n';
    }
}