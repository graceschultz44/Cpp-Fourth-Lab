//
// Created by Ken Howard on 3/8/23.
//
#include "Play.h"

Play::Play() {
    srand(time(NULL)); //Seed random number generator
    yardsMoved = 0; //initialize yardsMoved to 0
}

void Play::setPlayType(string playType) { this->playType = playType; }

void Play::setYardsMoved(int yardsMoved) { this->yardsMoved = yardsMoved; }

string Play::getPlayType() { return playType; }

int Play::getYardsMoved() { return yardsMoved; }

void Play::start() {

    cout << "Run or Pass(R/P)" << endl; //Prompt user for (P)ass or (R)un play
    cin >> playType;

    if (playType == "p") {
        setPlayType("Pass"); //Set playType to "Pass" or "Run"
    }
    else if (playType == "r") {
        setPlayType("Run"); //Set playType to "Pass" or "Run"
    }
    if (playType == "Pass") {
        pass(); //if "Run", call Run function
    }
    else if (playType == "Run") {
        run(); //if "Pass", call Pass function
    }
}

void Play::run() {

    const int arrayNum2[10] = {static_cast<int>(-5), static_cast<int>(-3), static_cast<int>(-1), static_cast<int>(1), static_cast<int>(2), static_cast<int>(4), static_cast<int>(5), static_cast<int>(6), static_cast<int>(8), static_cast<int>(9)};
    int RandIndex = rand() % 10;
    setYardsMoved(arrayNum2[RandIndex]); // set yardsMoved to random value from the list in the instructions
}

void Play::pass() {

    const int arrayNum[10] = {static_cast<int>(-10), static_cast<int>(-5), static_cast<int>(0), static_cast<int>(0), static_cast<int>(5), static_cast<int>(10), static_cast<int>(15), static_cast<int>(20), static_cast<int>(25), static_cast<int>(30)};
    int RandIndex = rand() % 10;
    setYardsMoved(arrayNum[RandIndex]); //set yardsMoved to random value from the list in the instructions
}

void Play::Print() {
    if (getPlayType() != "") { // takes into consideration turn change
        cout << getPlayType() << " play for " << getYardsMoved() << " yards" << endl; //print playType and yardsMove
    }
}