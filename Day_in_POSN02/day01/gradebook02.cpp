// class with parameter

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class GradeBook{
    public:
        void displayMessage(string courseName){
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        }
};

int main(){
    string nameOfCourse;
    GradeBook myGradebook;
    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse);
    cout << endl;
    myGradebook.displayMessage(nameOfCourse);
    //getchar(); //ไว้ค้างตอน exe
    return 0;
}