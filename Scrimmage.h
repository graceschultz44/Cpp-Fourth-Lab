//
// Created by Ken Howard on 3/8/23.
//

#ifndef PROGRAM4_SPRING2023_SCRIMMAGE_H
#define PROGRAM4_SPRING2023_SCRIMMAGE_H
#include "Team.h"

class Scrimmage {
//Scrimmage class definition with private and public member definitions
public:
    Scrimmage();
    void play();
    void printScoreboard();
    void printReplay();

private:
    vector<Team> teamVec;

};
#endif //PROGRAM4_SPRING2023_SCRIMMAGE_H
