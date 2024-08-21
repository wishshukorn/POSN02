#include<iostream>
#include<string>

// using namespace std;

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;

class a {
    public:
        void mes(string b){
            cout << "Welcome " << b << " !" << endl;
        }
};

int main(){
    string c;
    a d;
    cout << "Input string: " << endl;
    getline(cin, c);
    d.mes(c);
    return 0;
}