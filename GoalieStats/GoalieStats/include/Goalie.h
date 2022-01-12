#ifndef GOALIE_H
#define GOALIE_H


using namespace std;

#include <string>

class Goalie
{
    public:
        Goalie();
        void setName(string);
        void setTeam(string);
        void setWins(int);
        void setLosses(int);
        void setGoalsAgainst(int);
        void setShotsAgainst(int);

        string getName();
        string getTeam();
        int getWins();
        int getLosses();
        int getGoalsAgainst();
        int getShotsAgainst();
        int getSaves();
        double getSavePct();

        virtual ~Goalie();

    protected:

    private:
        string name;
        string team;
        int wins, losses;
        int goalsAgainst,shotsAgainst;

};

#endif // GOALIE_H
