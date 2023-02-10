#include <iostream>
#include <ctime>

int generateRandomNumber();
int getGuess();
bool checkAnswer(int num, int guess);
std::string giveHint(int num, int guess);
char getDecision();
bool userRetry(char decision);
int reset(bool retry);
int resetLives();



int main(){

    int lives = 3;
    int num;
    int guess;
    bool correct;
    bool retry = 1;
    bool replay;
    char decision;
    std::string hint;
    num = generateRandomNumber();

    do
    {   
        std::cout << "the answer is: " << num << std::endl;
        std::cout << "You have " << lives << " lives remaining." << std::endl;
        guess = getGuess();
        correct = checkAnswer(num, guess);
            if(correct==1){
                std::cout << "You got the answer right!" << std::endl;
                decision = getDecision();
                if(decision=='Y' || decision=='y'){
                std::cout << "You have chosen to play again" << std::endl;
                lives = resetLives();
                num = generateRandomNumber();
                retry = 1;
                continue;
                }
                if(decision=='N' || decision=='n'){
                std::cout << "You have chosen not to play again" << std::endl;
                std::cout << "Ending..." << std::endl;
                break;
                }
            }
        hint = giveHint(num, guess);
        std::cout << hint << std::endl;
        lives--;

        if(lives==0){
            std::cout << "You're out of lives." << std::endl;
            decision = getDecision();
                if(decision=='Y' || decision=='y'){
                std::cout << "You have chosen to retry" << std::endl;
                lives = resetLives();
                num = generateRandomNumber();
                retry = 1;
                }
                if(decision=='N' || decision=='n'){
                std::cout << "You have chosen not to retry" << std::endl;
                std::cout << "Ending..." << std::endl;
                break;
                }
        }
    } while (retry==1);
    
    return 0;
}

int generateRandomNumber(){
    int num;
    std::cout << "Generating random number..." << std::endl;
    srand(time(NULL));
    num = rand()% 10 + 1;
    std::cout << "Random number generated." << std::endl;
    return num;
}

int getGuess(){
    int guess;
    std::cout << "Enter your guess: " << std::flush;
    std::cin >> guess; 
    return guess;
}

bool checkAnswer(int num, int guess){
    bool correct;
 num == guess? correct=1 : correct=0;
 return correct;
}

std::string giveHint(int num, int guess){
    std::string hint;
    if(guess < num){
        hint = "Guess is too low";
    }
    if(guess > num){
        hint = "Guess is too high";
    }
    return hint;
}

char getDecision(){
    char decision;
    std::cout << "Would you like to play again? Y/N: " << std::flush;
    std::cin >> decision;
    return decision;
}

bool userRetry(char decision){
    bool retry;
    if(decision=='Y' || decision=='y'){
    std::cout << "You have chosen to retry" << std::endl;
    return retry = 1;
    }
    else if(decision=='N' || decision=='n'){
    std::cout << "You have chosen not to retry" << std::endl;
    std::cout << "Ending..." << std::endl;
    return retry = 0;
    }
    else{
    std::cout << "Invalid response." << std::endl; 
    return retry =0; 
    }
}

int resetLives(){
    int lives = 3;
    return lives;
}

int reset(bool retry){
    int num;
    if(retry==1){
    num = generateRandomNumber();
    }
    return num;
}