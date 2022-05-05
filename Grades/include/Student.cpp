#include "Student.h"

Student::Student()
{
    //ctor
}
//Student::Student(string s_name, int s_id, int s_scores[])
//{
    //name = s_name;
    //id = s_id;
    //for (int i = 0; i < NUM_SCORES; i++)
      //  scores[i] = s_scores[i];

Student::~Student()
{
    //dtor
}

void Student::setName(string n){
    name = n;
}

void Student::setScore(int currentScore){
    scores = currentScore;

}

void Student::setId(int set_id){
    id = set_id;
}

string Student::getName(){
    return name;
}



int Student::getScores(){
    //int sum = 0;
    //for (int i = 0; i < NUM_SCORES; i++)
      //  sum += scores[i];

    return scores;
}
