
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
