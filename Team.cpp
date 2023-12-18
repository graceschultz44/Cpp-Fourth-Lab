//
// Created by Ken Howard on 3/8/23.
//
#include "Team.h"
#include "Play.h"

Team::Team(string s) {
    name = s; // initialize name to string passed in
    score = 0; // set score equal to zero
}

void Team::setName(string name) { this->name = name; }

void Team::setScore(int score) { this->score = score; }

string Team::getName() const { return name; }

int Team::getScore() const { return score; }

void Team::replay() {
    cout << "Play summary for " << this->getName() << ":" << endl;
    //Loop through plays vector and call print for all Play objects
    for(int i = 0; i < playVec.size(); i++) {
        playVec.at(i).Print();
    }
}

void Team::takeTurn() {
    Play playObject; // create play object
    int location = 20;
    int downCounter = 1;
    int target = location + 10;
    int yardsNeeded;
    int theYardsMoved;

    while (true) { // loops until the turn ends
        cout << "Ball at: " << location << "   Down #" << downCounter << endl;

        playVec.push_back(playObject); // add object to vector
        playObject.start(); // send start to the play object

        theYardsMoved = playObject.getYardsMoved(); // get yards moved from the play class

        if (theYardsMoved > 0) {
            cout << "Moved " << theYardsMoved << " yards" << endl;
        } else if (theYardsMoved < 0) {
            cout << "Moved back " << (theYardsMoved * -1) << " yards" << endl;
        } else if (theYardsMoved == 0) {
            cout << "No yards" << endl;
        }

        location += theYardsMoved; // update location

        if (location >= 100) { // checks to see if a touchdown was made
            cout << "Touchdown!" << endl;
            score += 6;
            break;
        } else {
            if (location < target) {
                downCounter++; // increments the down counter
            }
            if (downCounter > 4) {
                cout << "Turn over" << endl; // 4 downs means that turn is over
                break;
            } else if (location >= target) {
                target = location + 10;
            }
        }
        yardsNeeded = target - location;
        cout << yardsNeeded << " yards to 1st down" << endl; // print yards needed for 1
    }
}