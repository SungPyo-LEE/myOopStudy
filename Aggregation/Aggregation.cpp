#include <iostream>
#include <vector>
#include <string>

#include "Lecture.h"

int main()
{
    using namespace std;

    Student *std1 = new Student("jack jack", 0);
    Student *std2 = new Student("Dash", 0);
    Student *std3 = new Student("violet", 0);

    Teacher *teacher1 = new Teacher("Prof.COW");
    Teacher *teacher2 = new Teacher("Prof.NONAME");

    Lecture lec1("computer");
    lec1.assignTeacher(teacher1);
    lec1.registerStudents(std2);
    lec1.registerStudents(std1);

    Lecture lec2("saxycow");
    lec2.assignTeacher(teacher2);
    lec2.registerStudents(std2);

    cout << lec1 << endl;
    lec1.study();
    cout << lec2 << endl;
    lec2.study();
    cout << lec2 << endl;


    delete std1;
    delete std2;

    delete teacher1;
    delete teacher2;
    return 0;
}
