#include <stdio.h>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <Goalie.h>

using namespace std;

#define MAX_GOALIES 100 //Sets dynamic value for struct

void split(const string&, char , vector<string>& ); // Splits CSV values from file
void getFile(); //Stores data from CSV into class objects
void selSortWins(); //Selection sort by Wins
void selSortPCT(); //Selection sort by Save %
void printGoalies(); //Print

Goalie goalies[MAX_GOALIES]; //Initialize array of class objects

int main()
{


    getFile();

    bool exit = false;
    while(!exit){
        char user; //Input for menu
        cout << "Sort by 1. Wins 2. Save Pct. or Q. Quit" << endl;
        cin >> user;
        switch(user){
        case '1':       //"Sort by Wins"
            selSortWins();
            printGoalies();
            cout << "The goalie with the most wins is: ";
            cout<< goalies[0].getName().c_str() << endl;
            cout << endl;
            break;
        case '2':       //"Sort by SavePCT"

            selSortPCT();
            printGoalies();
            cout << endl;
            break;
        case 'Q': case 'q':
            cout << "Exiting..." << endl;
            exit = true;
            break;

        }

    }
}

void getFile(){
fstream dataFile;

    string input;
    int count = 0;
    dataFile.open("goalie_stats.csv"); //Open CSV file
    dataFile.ignore(10000,'\n'); //Ignore first line

    while(count < MAX_GOALIES && getline(dataFile, input)){ //While there are still lines to be read...
        vector<string> tokens;
        split(input,',',tokens);

        goalies[count].setName((tokens.at(0).c_str()));             //Add data to object attributes
        goalies[count].setTeam(tokens.at(1).c_str());
        goalies[count].setWins(atoi(tokens.at(2).c_str())); //atoi to convert string to int
        goalies[count].setLosses(atoi(tokens.at(3).c_str()));
        goalies[count].setGoalsAgainst(atoi(tokens.at(4).c_str()));
        goalies[count].setShotsAgainst(atoi(tokens.at(5).c_str()));

        count++;
        cout<<endl;
    }
    dataFile.close();

}

void printGoalies(){
    int x = 10; //Variables used to
    int y = 0; // display 10 players at a time

   // for(int i = 0; i<10; i++){ //Loop to print rows of 10 players

    cout << "Players Ranked:  " << y+1 << "/" << x << endl;
    printf("%-20s%-27s%-10s%-8s%-8s%-8s%-8s%-8s\n",
            "Name","Team","Wins","Losses","GA","SA","SV","SV%");
    for (int i = 0; i < 100; i++){
        printf("_");
    }
    printf("\n\n");

        for (int i = y; i < x; i++){ //Get and print each object

            printf("%-20s%-27s%-10d%-8d%-8d%-8d%-8d%-2.2f\n",
            goalies[i].getName().c_str(),
            goalies[i].getTeam().c_str(),
            goalies[i].getWins(),
            goalies[i].getLosses(),
            goalies[i].getGoalsAgainst(),
            goalies[i].getShotsAgainst(),
            goalies[i].getSaves(),
            goalies[i].getSavePct()
            );

            }

            //printf("\n\n");
            //y += 10; //Increase by 10
            //x +=10; // to get next set of 10 players
            //if (y >= MAX_GOALIES){
                //return 0
            }
    //}
//}

void selSortWins()
{

    int j, max;
    for (int i = 0; i < MAX_GOALIES-1; i++)
    {
        max = i;
        for (j = i+1; j < MAX_GOALIES; j++)
        if (goalies[j].getWins() > goalies[max].getWins()) //If wins at j is greater than wins at max
            max = j;
        Goalie temp;                                       //j becomes max, and j is swapped with i
        temp = goalies[max];
        goalies[max] = goalies[i];
        goalies[i] = temp;

        }
    }

void selSortPCT()
{

    int j, max;
    for (int i = 0; i < MAX_GOALIES-1; i++)
    {
        max = i;
        for (j = i+1; j < MAX_GOALIES; j++)
        if (goalies[j].getSavePct() > goalies[max].getSavePct()) //If savePCT at j is greater than SavePCT at max
            max = j;
        Goalie temp;                                             // j becomes max, and j is swapped with i
        temp = goalies[max];
        goalies[max] = goalies[i];
        goalies[i] = temp;

        }
    }

//Split string into tokens and add to token vector
void split(const string& s, char delim, vector<string>& tokens)
{
   int tokenStart = 0;
   size_t delimPos = s.find(delim);

   while (delimPos != string::npos)
   {
      string tok = s.substr(tokenStart, delimPos - tokenStart);

      tokens.push_back(tok);

      delimPos++;

      tokenStart = delimPos;
      delimPos = s.find(delim, delimPos);
      if (delimPos == string::npos)
      {

         string tok = s.substr(tokenStart, delimPos - tokenStart);
         tokens.push_back(tok);
      }
   }
}
