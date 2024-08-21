// c++ essential : class/* done */

// class 01 : void(void)

// #include<iostream>
// using std::cout;
// using std::endl;

// class GradeBook{
//     public:
//         void displayMessage(){
//             cout << "Welcome to the Grade book!" << endl;
//         }
// };

// int main(){
//     GradeBook myGradeBook;
//     myGradeBook.displayMessage();
//     return 0;
// }

// class 02 : void(string)

// #include<iostream>
// using std::cout;
// using std::cin;
// using std::endl;

// #include<string>
// using std::string;
// using std::getline;

// class GradeBook{
//     public:
//         void displayMessage(string courseName){
//             cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
//         }
// };

// int main(){
//     string nameOfCourse;
//     GradeBook myGradeBook;
//     cout << "Please enter the course name: " << endl;
//     getline(cin, nameOfCourse);
//     cout << endl;
//     myGradeBook.displayMessage(nameOfCourse);
//     return 0;
// }

// class 03 : string(void)

// #include<iostream>
// using std::cout;
// using std::cin;
// using std::endl;

// #include<string>
// using std::string;
// using std::getline;

// class GradeBook{
//     private:
//         string courseName;
//     public:
//         void setCourseName(string name){
//             courseName = name;
//         }
//         string getCourseName(){
//             return courseName;
//         }
//         void displayMessage(){
//             cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
//         }
// };

// int main(){
//     string nameOfCourse;
//     GradeBook myGradeBook;
//     cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;  // NULL
//     cout << "\nPlease enter the course name: " << endl;
//     getline(cin, nameOfCourse);
//     myGradeBook.setCourseName(nameOfCourse);
//     cout << endl;
//     myGradeBook.displayMessage();
//     return 0;
// }

// class 04 : default : class(string)

// #include<iostream>
// using std::cout;
// using std::endl;

// #include<string>
// using std::string;

// class GradeBook{
//     private:
//         string courseName;
//     public:
//         GradeBook(string name){
//             setCourseName(name);
//         }
//         void setCourseName(string name){
//             courseName = name;
//         }
//         string getCourseName(){
//             return courseName;
//         }
//         void displayMessage(){
//             cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
//         }
// };

// int main(){
//     GradeBook gradeBook1("Subject A");
//     GradeBook gradeBook2("Subject B");
//     cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
//     return 0;
// }


// class 05 : interface vs implementation
// #include<string>
// using std::string;

// // interface
// class GradeBook{
//     private:
//         string courseName;
//     public:
//         GradeBook(string);
//         void setCourseName(string);
//         string getCourseName();
//         void displayMessage();
// };

// // implementation
// #include<iostream>
// using std::cout;
// using std::endl;

// // #include "GradeBook.h"

// GradeBook::GradeBook(string name){
//     setCourseName(name);
// }
// void GradeBook::setCourseName(string name){
//     courseName = name;
// }
// string GradeBook::getCourseName(){
//     return courseName;
// }
// void GradeBook::displayMessage(){
//     cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
// }

// // client
// #include<iostream>
// using std::cout;
// using std::endl;

// // #include "GradeBook.h"

// int main(){
//     GradeBook gradeBook1("Subject A");
//     GradeBook gradeBook2("Subject B");
//     cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
//     return 0;
// }