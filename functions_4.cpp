#include <iostream>
#include <ctime>

void generateRandomNumber(int &num);
void getGuess(int &guess);
void checkAnswer(int num, int guess, bool &correct);
void giveHint(int num, int guess);
void getDecision(char &decision);
void reset(bool retry, int &num, int &lives);
void resetLives(int &lives);



int main(){

    int lives = 3;
    int num;
    int guess;
    bool correct;
    bool retry = 1;
    char decision;
    std::string hint;

    generateRandomNumber(num); 

    do
    {   
        std::cout << "You have " << lives << " lives remaining." << std::endl;
        std::cout << '\n';
        getGuess(guess);
        checkAnswer(num, guess, correct);
            if(correct==1){
                std::cout << "You got the answer right!" << std::endl;
                getDecision(decision);
                if(decision=='Y' || decision=='y'){
                std::cout << "You have chosen to play again" << std::endl;
                std:: cout << '\n';
                reset(retry, num, lives);
                continue;
                }
                if(decision=='N' || decision=='n'){
                std::cout << "You have chosen not to play again" << std::endl;
                std::cout << "Ending..." << std::endl;
                break;
                }
            }
        giveHint(num, guess);
        lives--;

        if(lives==0){
            std::cout << "You're out of lives." << std::endl;
            std::cout << "The answer was: " << num << std::endl;
            getDecision(decision);
                if(decision=='Y' || decision=='y'){
                std::cout << "You have chosen to retry" << std::endl;
                std:: cout << '\n';
                reset(retry, num, lives);
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

void generateRandomNumber(int &num){
    std::cout << "Generating random number..." << std::endl;
    srand(time(NULL));
    num = rand()% 10 + 1;
    std::cout << "Random number between 1-10 generated." << std::endl;
}

void getGuess(int &guess){
    
    do
    {
        std::cout << "Enter your guess: " << std::flush;
        std::cin >> guess;
        if(guess>10){
            std::cout << "Your guess can't be bigger than 10." <<std::endl;
        }
        if(guess <1){
            std::cout << "Your guess can't be less than 1." <<std::endl;
        }
    } while (guess >10 || guess <1);
}

void checkAnswer(int num, int guess, bool &correct){
 num == guess ? correct=1 : correct=0;
}

void giveHint(int num, int guess){
    if(guess < num){
        std::cout << "Guess is too low" << std::endl;
    }
    if(guess > num){
        std::cout << "Guess is too high" << std::endl;
    }
}

void getDecision(char &decision){
    std::cout << "Would you like to play again? Y/N: " << std::flush;
    std::cin >> decision;
}

void resetLives(int &lives){
    lives = 3;
}

void reset(bool retry, int &num, int &lives){
    generateRandomNumber(num);
    resetLives(lives);
    retry = 1;
}