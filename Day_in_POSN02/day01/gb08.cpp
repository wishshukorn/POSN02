#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class a{
    private:
        string nn;
    public:
        a(string name){
            set(name);
        }
        void set(string name){
            nn = name;
        }
        string get(){
            return nn;
        }
};

int main(){
    a a1("a1");
    a a2("a2");
    cout << "111" << a1.get() << "\n222" << a2.get() << endl;
    return 0;

}