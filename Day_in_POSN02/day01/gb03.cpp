#include<iostream>
using std::cout;
using std::endl;

class Gradebook {
    public:
        void displayMessage(){
            cout << "Welcome to the Grade Book!" << endl;
        }
};

int main(){
    Gradebook myGradeBook;
    myGradeBook.displayMessage();
    return 0;
}