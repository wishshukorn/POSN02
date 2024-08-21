// c++ essential : map /* done */


//
// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// int main(){
//     map <int, string> Students;
//     Students.insert(pair <int, string> (100, "Alice"));
//     Students.insert(pair <int, string> (201, "John"));
//     cout << "Map size is: " << Students.size() << endl;
//     cout << endl << "Default map Order is: " << endl;
//     for(map <int, string> ::iterator it = Students.begin(); it!= Students.end();it++){
//         cout << (*it).first << ": " << (*it).second << endl;
//     }
//     return 0;
// }


//
// #include<map>
// #include<iostream>
// using namespace std;

// int main(){
//     map <int, int> m{{1, 3}, {2, 4}, {3, 5}};
//     m.insert({5, 6});
//     m.insert({5, 6});
//     m.insert({1, 8});
//     m.insert_or_assign(1, 6);
//     cout << "Key\tElement\n";
//     for(auto itr=m.begin();itr!=m.end();itr++){
//         cout << itr -> first << '\t' << itr -> second << '\n';
//     }
//     return 0;
// }


//
// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// int main(){
//     map <int, string> Students;
//     Students.insert(pair<int, string>(200, "Alice"));
//     Students.insert(pair<int, string>(201, "John"));
//     map<int, string>::iterator it = Students.find(201);
//     if(it!=Students.end()){
//         cout << endl << "Key 201 has the value: => " << Students.find(201) -> second << '\n';
//     }
// }


//
// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// int main(){
//     map <string, int> mymap;
//     mymap.insert(make_pair("cow", 1));
//     mymap.insert(make_pair("cat", 2));
//     mymap["lion"] = 3;
//     map<string, int>::iterator it = mymap.find("cat");
//     mymap.erase(it);
//     for(map<string, int>::iterator it=mymap.begin();it!=mymap.end();it++){
//         cout << (*it).first << ": " << (*it).second << endl;
//     }
//     return 0;
// }


//
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// bool IsOdd(int i){
//     return ((i%2) == 1);
// }

// int main(){
//     vector <int> myvector;
//     for(int i=1;i<10;i++){
//         myvector.push_back(i);
//     }
//     int mycount = count_if(myvector.begin(), myvector.end(), IsOdd);
//     cout << "myvector contains " << mycount << " odd values.\n";
//     return 0;
// }