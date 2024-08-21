// c++ essential : list /* done */


//
// #include<iostream>
// #include<list>

// int main(){
//     std::list <int> mylist = {12, 5, 10, 9};
//     for(int x : mylist){
//         std::cout << x << '\n';
//     }
// }


//
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list <int> mylist = {12, 5, 10, 9};
//     for(int x : mylist){
//         cout << x << '\n';
//     }
//     return 0;
// }


//
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list <int> l;
//     list <int> l1 = {10, 20, 30};
//     list <int> l2(l1.begin(), l1.end());
//     list <int> l3(move(l1));
//     cout << "Size of list l: " << l.size() << endl;
//     cout << "List l2 contents: " << endl;
//     for(auto it=l2.begin();it!=l2.end();it++){
//         cout << *it << endl;
//     }
//     cout << "List l3 contents: " << endl;
//     for(auto it=l3.begin();it!=l3.end();it++){
//         cout << *it << endl;
//     }
//     return 0;
// }


//
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     list <int> mylist = {12, 5, 10, 9};
//     mylist.push_front(11);
//     mylist.push_back(18);
//     auto it = std::find(mylist.begin(), mylist.end(), 10);
//     if(it != mylist.end()){
//         mylist.insert(it, 21);
//     }
//     for(int x : mylist){
//         cout << x << '\n';
//     }
// }


//
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list <int> mylist = {12, 5, 10, 9};
//     cout << "List elements before deletion: ";
//     for(int x : mylist){
//         cout << x << '\n';
//     }
//     list<int>::iterator i = mylist.begin();
//     mylist.erase(i);
//     cout << "\nList elements after deletion: ";
//     for(int x : mylist){
//         cout << x << '\n';
//     }
//     return 0;
// }

