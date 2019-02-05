#include <iostream>
#include <string>
#include "FBullCowGame.cpp"

using FText = std::string;

//create an instance of the game
FBullCowGame BCGame;

//declaration
void PrintIntro();
FText GetGuess();
void PlayGame();
bool AskToPlayAgain();



int main()
{
    bool bPlayAgain = false;
    do{
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }while(bPlayAgain);
    
    return 0;
    
}

//print the intro
void PrintIntro(){

    int maxTries = BCGame.GetMaxTries();
    std::cout << "Welcome to Bulls and Cows, a fun word game. " <<std::endl;
    std::cout << "Can You Guess The " << maxTries << std::endl;
    std::cout << "Letter isogram I'm thinking of? "<< std::endl;
    return;
}
void PlayGame(){
    BCGame.Rest();
    int maxTries = BCGame.GetMaxTries();
    for(int i =0; i < maxTries; i++)
    {
        GetGuess();
    }
};

//get the guess from user
FText GetGuess(){
    FText Guess;
    std::cout<< "Enter Your Guess: ";
    getline(std::cin, Guess);
    return Guess;
};

//ask the playe to play again
bool AskToPlayAgain(){
    FText Msg;
    std::cout << "Do you want to play again?";
    getline(std::cin, Msg);
    
    return ((Msg[0] == 'y') || (Msg[0] == 'Y'));
};


