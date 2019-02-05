//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Liangming Lin on 10/20/18.
//  Copyright © 2018 Liangming Lin. All rights reserved.
//

#include "FBullCowGame.hpp"
FBullCowGame::FBullCowGame()
{
    Rest();
}


bool FBullCowGame::CheckGuessValidity(FText) {
    
    return false;
}


bool FBullCowGame::IsGameWon() const{
    return false;
}


int FBullCowGame::GetCurrentTry() {
    MyCurrentTry++;
    return MyCurrentTry;
}


int FBullCowGame::GetMaxTries() const{
    return MyMaxTries;
}


void FBullCowGame::Rest() {
    const int MAX_TRIES = 8;
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}
