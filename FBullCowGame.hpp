#pragma once
#include <string>

using FText = std::string;
class FBullCowGame{
public:
    FBullCowGame();
    void Rest();
    int GetMaxTries() const;
    int GetCurrentTry() ;
    bool IsGameWon() const;
    bool CheckGuessValidity(FText);
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};
