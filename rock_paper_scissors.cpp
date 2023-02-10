#include <iostream>
#include <ctime>

char getUserInput();
char getComputerInput();
void showChoice(char choice);
int determineWinner(char userchoice, char computerchoice);
char playAgain();
int allocatePoints();
void showScore(int userscore, int computerscore);

int main(){

char userInput;
char computerInput;
char play = 'Y';
int winner;
int computerScore = 0;
int userScore = 0;

do{
    userInput = getUserInput();
    computerInput = getComputerInput();
    std::cout << "You chose: " << std::flush;
    showChoice(userInput);
    std::cout << "Computer chose: " << std::flush;
    showChoice(computerInput);
    winner = determineWinner(userInput, computerInput);
    if(winner==1){
    userScore = userScore + allocatePoints();
    }
    else if(winner==0){
        computerScore = computerScore + allocatePoints();
    }
    if(winner==2){
        std::cout << "No points awarded." << std::endl;
    }
    showScore(userScore, computerScore);
    play = playAgain();

}
while(play == 'Y' || play == 'y');
std::cout << "You chose not to play again." << std::endl;
    return 0;
}

char getUserInput(){
    char input;
    do
    {
        std::cout << "Enter your choice: " << std::flush;
        std::cin >> input;
    } while (input != 'R' && input != 'r' && input != 'P' && input != 'p' && input != 'S' && input != 's');
    return input;
}

char getComputerInput(){
    int x;
    char choice;
    srand(time(0));
    x = rand()% 3 +1;
    switch (x)
    {
    case 1:
        return choice = 'r';
        break;
    case 2:
        return choice = 'p';
        break;
    case 3:
        return choice = 's';
        break;
    
    default:
    return 0;
        break;
    }
}

void showChoice(char choice){
switch (choice)
{
case 'R':
    std::cout << "Rock" << std::endl;
    break;
case 'r':
    std::cout << "Rock" << std::endl;
    break;
case 'P':
    std::cout << "Paper" << std::endl;
    break;
case 'p':
    std::cout << "Paper" << std::endl;
    break;
case 'S':
    std::cout << "Scissors" << std::endl;
    break;
case 's':
    std::cout << "Scissors" << std::endl;
    break;
default:
    break;
}
}

int determineWinner(char userinput, char computerinput){
    int playerwin;
    if(userinput == 'R' && computerinput == 'p'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 'r' && computerinput == 'p'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 'R' && computerinput == 's'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 'r' && computerinput == 's'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 'R' && computerinput == 'r'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    }
    if(userinput == 'r' && computerinput == 'r'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    } 
    if(userinput == 'S' && computerinput == 'p'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 's' && computerinput == 'p'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 'S' && computerinput == 'r'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 's' && computerinput == 'r'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 'S' && computerinput == 's'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    }
    if(userinput == 's' && computerinput == 's'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    } 
    if(userinput == 'P' && computerinput == 'r'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 'p' && computerinput == 'r'){
        std::cout << "You win." <<std::endl;
        return playerwin=1;
    }
    if(userinput == 'P' && computerinput == 's'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 'p' && computerinput == 's'){
        std::cout << "Computer wins." <<std::endl;
        return playerwin=0;
    }
    if(userinput == 'P' && computerinput == 'p'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    }
    if(userinput == 'p' && computerinput == 'p'){
        std::cout << "It's a draw." <<std::endl;
        return playerwin=2;
    } 
}

char playAgain(){
    char input;
    std::cout << "Would you like to play again? Y/N: " << std::flush;
    std::cin >> input;
    return input;
}

int allocatePoints(){
    int score =1;
    return score;
}

void showScore(int userscore, int computerscore){
    std::cout << "The score is:" << std::endl;
    std::cout << "Computer " << computerscore << " : " << userscore << " Player" << std::endl;
}