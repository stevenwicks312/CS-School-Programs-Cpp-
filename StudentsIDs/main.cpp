#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    const int NUM_STUDENTS = 2;
    int test_scores[NUM_STUDENTS] = {99, 88};
    string names[NUM_STUDENTS] = {"wicks", "brennan"};

#else
    Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        students[i].setName(names[i]);
        students[i].setScore(test_scores[i]);
        students[i].setId(i+1000);

    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Student: " << students[i].getName()
            << " ID: " << students[i].getId()
            << " has Score " << students[i].getScore();
    }

#endif
}
