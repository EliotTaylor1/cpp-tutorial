#include <iostream>
#include <ctime>

int main(){


    srand(time(NULL)); //create the seed for the random number

    int num = rand()% 10 + 0; //create the random number and set the range
    int guess;
    int lives = 3;
    
    do
    {
        std::cout << "You have: " << lives << " guesses reamining." << std:: endl;
        std::cout << "Guess the number: " << std::flush;
        std::cin >> guess;

        if(guess < num){
        std::cout << "Your guess was too low" << std::endl;
        lives--;
        }

        if(guess > num){
        std::cout << "Your guess was too high" << std::endl;
        lives--;
        }

        if(lives==0){
            std::cout << "You have no guesses remaining" <<std::endl;
            break;
        }

    } while (guess != num);

    if(guess==num){
    std::cout << "You guessed correctly." << std::endl;
    std::cout << "The number was " << num << "." << std::endl;
    }

    return 0;
}