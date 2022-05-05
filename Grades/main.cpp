#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    const int NUM_STUDENTS = 2;

    int test_scores[NUM_STUDENTS] = {88, 55};

    string names[NUM_STUDENTS] = {"wicks", "brennan"};
    //Student students[NUM_STUDENTS];

    //Student *s_ptr = new Student[NUM_STUDENTS];

    Student students[NUM_STUDENTS];

    for (int i=0; i < NUM_STUDENTS; i++) {
        students[i].setName(names[i]);
        students[i].setScore(test_scores[i]);
        students[i].setId(i+1000);
    }
    for (int i=0; i < NUM_STUDENTS; i++) {
        students[i].getName(names[i]);
        students[i].getScores(test_scores[i]);
        students[i].getId(i+1000);

    }
    //Student students("Wicks", 1234, test_scores);

    cout << "Student: " << s.getName();
    cout << "  Avg: " << s.getAvg() << endl;
}
