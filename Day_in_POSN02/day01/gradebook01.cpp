// class

#include<iostream>

using std::cout;
using std::endl;

class GradeBook{
    public:
        void displayMessage(){
            cout << "Welcome to the Gade Book!" << endl;
        }
};

int main(){
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    return 0;
}