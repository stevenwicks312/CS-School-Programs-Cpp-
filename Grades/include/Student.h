#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

#include <string>

#define NUM_SCORES 6

class Student
{
    public:
        Student();
        //Student(string s_name, int s_id, int s_scores[NUM_SCORES]);
        virtual ~Student();

        void setName(string);
        void setScore(int);
        void setId(int);


        int getId();
        string getName();
        int getScores();
        //double getAvg();

    protected:

    private:
        string name;
        int id;
        int scores;
};

#endif // STUDENT_H
