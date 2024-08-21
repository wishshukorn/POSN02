#include<iostream>
#include<list>
using namespace std;

int main(void){
    list <int> l;
    list <int> l1 = {10, 20, 30};
    list <int> l2(l1.begin(), l1.end());
    list <int> l3(move(l1));

    cout << "size" << l.size() << '\n' << "list l2: " << endl;
    for(auto i=l2.begin(); i!=l2.end(); i++){
        cout << *i << endl;
    }
    cout << "list l3:" << endl;
    for(auto i=l3.begin(); i!=l3.end(); i++){
        cout << *i << endl;
    }
    return 0;
}