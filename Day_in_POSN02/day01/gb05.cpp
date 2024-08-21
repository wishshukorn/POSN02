#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

// using namespace std;

class Gradebook {
    public:
        void displayMessage (string couseName){
            cout << "Welcome to thegrade book for\n" << couseName << " !" << endl;
        }
};

int main(){
    string nameOfCourse;
    Gradebook myGradeBook;
    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse);
    cout << endl;
    myGradeBook.displayMessage(nameOfCourse);
    return 0;
}