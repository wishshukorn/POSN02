#include<iostream>
#include<string>

using namespace std;

class Gradebook {
    private:
        string courseName;
    public:
        void setCourseName(string name){
            courseName = name;
        }
        string getCourseName(){
            return courseName;
        }
        void displayMessage(){
            cout << "Welcome to grade book for\n" << getCourseName() << " !" << endl;
        }
};

int main(){
    string nameOfCourse;
    Gradebook mygradebook;
    cout << "Initial course name is: " << mygradebook.getCourseName() << endl; //emtpy string
    cout << "\nPlease enter the course name" << endl;
    getline(cin, nameOfCourse);
    mygradebook.setCourseName(nameOfCourse);
    cout << endl;
    mygradebook.displayMessage();
    return 0;
}