#include <iostream>

int main(){
    int month;

    std::cout << "Enter the number of the month of the year: " << std::flush;
    std::cin >> month;

    switch (month) //declare a switch and the variable it is readin 
    {
    case 1: //define the first value the switch should check for
        std::cout << "It is January" << std::endl;
        break; //if the value matches, break out of the switch and continue with the code

    case 2: //define the next value the switch should check for
        std::cout << "It is February" << std::endl;
        break;
    
    default: //if none of the values match - do this
    std:: cout << "You did not enter a valid number" << std::endl;
        break;
    }

    return 0;
}