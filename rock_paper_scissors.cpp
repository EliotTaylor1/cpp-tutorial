#include <iostream>
#include <ctime>

char getUserInput();
char getComputerInput();
void showChoices(char userchoice, char computerchoice);
void determineWinner(char userchoice, char computerchoice);
char playAgain();

int main(){

char userInput;
char computerInput;
char play = 'Y';

do{
    userInput = getUserInput();
    computerInput = getComputerInput();
    showChoices(userInput, computerInput);
    determineWinner(userInput, computerInput);
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

void showChoices(char userchoice, char computerchoice){
switch (userchoice)
{
case 'R':
    std::cout << "You chose: Rock" << std::endl;
    break;
case 'r':
    std::cout << "You chose: Rock" << std::endl;
    break;
case 'P':
    std::cout << "You chose: Paper" << std::endl;
    break;
case 'p':
    std::cout << "You chose: Paper" << std::endl;
    break;
case 'S':
    std::cout << "You chose: Scissors" << std::endl;
    break;
case 's':
    std::cout << "You chose: Scissors" << std::endl;
    break;
default:
    break;
}
switch (computerchoice)
{
case 'r':
    std::cout << "Computer chose: Rock" << std::endl;
    break;
case 'p':
    std::cout << "Computer chose: Paper" << std::endl;
    break;
case 's':
    std::cout << "Computer chose: Scissors" << std::endl;
    break;
default:
    break;
}
}

void determineWinner(char userinput, char computerinput){
    if(userinput == 'R' && computerinput == 'p'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 'r' && computerinput == 'p'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 'R' && computerinput == 's'){
        std::cout << "You win." <<std::endl;
    }
    if(userinput == 'r' && computerinput == 's'){
        std::cout << "You win." <<std::endl;
    }
    if(userinput == 'R' && computerinput == 'r'){
        std::cout << "It's a draw." <<std::endl;
    }
    if(userinput == 'r' && computerinput == 'r'){
        std::cout << "It's a draw." <<std::endl;
    } 
    if(userinput == 'S' && computerinput == 'p'){
        std::cout << "You won." <<std::endl;
    }
    if(userinput == 's' && computerinput == 'p'){
        std::cout << "You won." <<std::endl;
    }
    if(userinput == 'S' && computerinput == 'r'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 's' && computerinput == 'r'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 'S' && computerinput == 's'){
        std::cout << "It's a draw." <<std::endl;
    }
    if(userinput == 's' && computerinput == 's'){
        std::cout << "It's a draw." <<std::endl;
    } 
    if(userinput == 'P' && computerinput == 'r'){
        std::cout << "You won." <<std::endl;
    }
    if(userinput == 'p' && computerinput == 'r'){
        std::cout << "You won." <<std::endl;
    }
    if(userinput == 'P' && computerinput == 's'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 'p' && computerinput == 's'){
        std::cout << "Computer wins." <<std::endl;
    }
    if(userinput == 'P' && computerinput == 'p'){
        std::cout << "It's a draw." <<std::endl;
    }
    if(userinput == 'p' && computerinput == 'p'){
        std::cout << "It's a draw." <<std::endl;
    } 
}

char playAgain(){
    char input;
    std::cout << "Would you like to play again? Y/N: " << std::flush;
    std::cin >> input;
    return input;
}