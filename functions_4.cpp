#include <iostream>
#include <ctime>

int updateLives(int lives);
int generateRandomNumber(int num);
int getGuess(int num);
bool checkAnswer(int num, int guess, bool correct);
std::string giveHint(int num, int guess, std::string hint);
char getDecision(char decision);
bool userRetry(char decision, bool retry);
int reset(bool retry, int num);
int resetLives(int lives);

int lives = 6;

int main(){


    int num;
    int guess;
    bool correct;
    bool retry = 1;
    char decision;
    std::string hint;
    num = generateRandomNumber(num);
    lives = updateLives(lives);

    do
    {   
        std::cout << "loop start" << std::endl;
        std::cout << "the answer is: " << num << std::endl;
        std::cout << "the value of lives is: " << lives << std::endl;
        std::cout << "You have " << lives << " lives remaining." << std::endl;
        guess = getGuess(guess);
        hint = giveHint(num, guess, hint);
        std::cout << hint << std::endl;
        correct = checkAnswer(num, guess, correct);
        lives = updateLives(lives);

        if(lives==0){
            std::cout << "You're out of lives." << std::endl;
            decision = getDecision(decision);
            reset(retry, num);
            resetLives(lives);
            retry = userRetry(decision, retry);
            std::cout << "reset loop - the value of lives is: " << lives << std::endl;
        }
    } while (retry==1);
    
    return 0;
}

int updateLives(int lives){
    lives --;
    return lives;
}

int generateRandomNumber(int num){
    std::cout << "Generating random number..." << std::endl;
    srand(time(NULL));
    num = rand()% 10 + 1;
    std::cout << "Random number generated." << std::endl;
    return num;
}

int getGuess(int guess){
    std::cout << "Enter your guess: " << std::flush;
    std::cin >> guess; 
    return guess;
}

bool checkAnswer(int num, int guess, bool correct){
 num == guess? correct=1 : correct=0;
 return correct;
}

std::string giveHint(int num, int guess, std::string hint){
    if(guess < num){
        hint = "Guess is too low";
    }
    if(guess > num){
        hint = "Guess is too high";
    }
    return hint;
}

char getDecision(char decision){
    std::cout << "Would you like to retry? Y/N: " << std::flush;
    std::cin >> decision;
    return decision;
}

bool userRetry(char decision, bool retry){
    if(decision=='Y' || decision=='y'){
    std::cout << "You have chosen to retry" << std::endl;
    retry = 1;
    }
    else if(decision=='N' || decision=='n'){
    std::cout << "You have chosen not to retry" << std::endl;
    std::cout << "Ending..." << std::endl;
    retry = 0;
    }
    else{
    std::cout << "Invalid response." << std::endl;  
    }
    return retry;
}

int resetLives(int lives){
        lives = 6;
    std::cout << "resetLives has run, the value of lives is:" << lives << std::endl;
    return lives;
}

int reset(bool retry, int num){
    if(retry==1){
    num = generateRandomNumber(num);
    }
    return num;
}