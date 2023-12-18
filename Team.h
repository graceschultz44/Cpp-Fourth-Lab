//
// Created by Ken Howard on 3/8/23.
//

#ifndef PROGRAM4_SPRING2023_TEAM_H
#define PROGRAM4_SPRING2023_TEAM_H
#include <string>
#include <vector>
#include "Play.h"
using namespace std;

class Team {

    //Team primate and public member definitions
    //use inline functions for getter and setter logic
public:
    Team(string s);

    string getName() const;

    void setName(string name);

    int getScore() const;

    void setScore(int score);

    void takeTurn();

    void replay();

private:
    string name;
    int score;
    vector<Play> playVec; // create a vector containing play objects

};

#endif //PROGRAM4_SPRING2023_TEAM_H
