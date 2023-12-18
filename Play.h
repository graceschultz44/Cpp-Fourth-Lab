//
// Created by Ken Howard on 3/8/23.
//

#ifndef PROGRAM4_SPRING2023_PLAY_H
#define PROGRAM4_SPRING2023_PLAY_H
#include <string>
#include <iostream>
#include "Play.h"
#include <ctime>
using namespace std;

class Play {
public:
    Play();
    void setPlayType(string thePlayType);
    void setYardsMoved(int theYardsMoved);
    string getPlayType();
    int getYardsMoved();
    void start();
    void run();
    void pass();
    void Print();

private:
    string playType;
    int yardsMoved;
};

#endif //PROGRAM4_SPRING2023_PLAY_H
