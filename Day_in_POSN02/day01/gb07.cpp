#include<iostream>
#include<string>

using namespace std;

class a {
    private:
        string pri;
    public:
        void b(string name){
            pri = name;
        }
        string c(){
            return pri;
        }
        void d(){
            cout << "Welcome " << c() << " !" << endl;
        }
};

int main(){
    a aa;
    string nn;
    cout << "What" << aa.c() << endl;
    cout << "Enter subj: " << endl;
    getline(cin, nn);
    aa.b(nn);
    aa.d();
}