#include <iostream>
#include <ctime>

int main(){


    srand(time(NULL)); //create the seed for the random number

    int num = rand()% 2 + 1; //create the random number and set the range
    int guess; //user's guess
    int lives = 3; //set the amount of guesses a user gets for this number
    char retry; //stores the Y/N for reset question when 0 lives reached
    
    do
    {
        std::cout << "You have: " << lives << " guesses reamining." << std:: endl;
        std::cout << "Guess the number: " << std::flush;
        std::cin >> guess;

        if(guess < num){
        std::cout << "Your guess was too low." << std::endl;
        lives--;
        }

        if(guess > num){
        std::cout << "Your guess was too high." << std::endl;
        lives--;
        }

        if(lives==0){ //if user runs out of guesses, ask them if they want to retry.
            std::cout << "You have no guesses remaining." <<std::endl;
            std::cout << "The number was: " << num <<std::endl;
            std::cout << "Would you like to retry? Y/N:" <<std::endl;
            std::cin >> retry; //accept retry decision
            if (retry=='Y' || retry=='y')
            {
                std::cout << "You chose to retry." << std::endl;
                num = rand()% 10 + 0; //generate a new number
                lives=3; //reset the lives
            }
            else if(retry=='N' || retry=='n'){
                std::cout << "You chose not to retry." << std::endl;
                std::cout << "Ending" << std::endl;
                break;
            }
            else{
                std::cout << "Invalid entry" << std::endl;
            }
            
        }

    } while (guess != num); //keep the loop running whilst the guess is incorrect.

    if(guess==num){
        std::cout << "You guessed correctly." << std::endl;
        std::cout << "The number was " << num << "." << std::endl;
        }

    return 0;
}