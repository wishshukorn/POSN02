#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "Here ";
    string str2 = "come the sun";
    cout << "Non-Equality\n" << str1 << endl;
    str2 = str1;
    cout << str2 << endl;
    return 0;
}