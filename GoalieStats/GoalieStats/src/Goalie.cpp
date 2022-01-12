#include "Goalie.h"

Goalie::Goalie()
{
    //ctor
}

void Goalie::setName(string n)
{
    name = n;
}
void Goalie::setTeam(string t)
{
    team = t;
}
void Goalie::setWins(int w)
{
    wins = w;
}
void Goalie::setLosses(int l)
{
    losses = l;
}
void Goalie::setGoalsAgainst(int ga)
{
    goalsAgainst = ga;
}
void Goalie::setShotsAgainst(int sa)
{
    shotsAgainst = sa;
}

string Goalie::getName()
{
    return name;
}
string Goalie::getTeam()
{
    return team;
}
int Goalie::getWins()
{
    return wins;
}
int Goalie::getLosses()
{
    return losses;
}
int Goalie::getGoalsAgainst()
{
    return goalsAgainst;
}
int Goalie::getShotsAgainst()
{
    return shotsAgainst;
}

int Goalie::getSaves()
{
    int numOfSaves = shotsAgainst-goalsAgainst;
    return numOfSaves;
}
double Goalie::getSavePct()
{
    int numOfSaves = shotsAgainst-goalsAgainst;
    double savePct = (double)numOfSaves/shotsAgainst;
    return savePct;
}

Goalie::~Goalie()
{
    //dtor
}
