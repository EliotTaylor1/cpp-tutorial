#include <iostream>

std::string getFirstName(std::string firstName);
std::string getLastName(std::string lastName);
void printFullName(std::string firstName, std::string lastName);

int main(){

std::string firstName;
std::string lastName;

firstName = getFirstName(firstName);
lastName = getLastName(lastName);

printFullName(firstName, lastName);

    return 0;
}

std::string getFirstName(std::string fname){ //parameters do not need to be the same name as arguments as they are in a separate scope.
    std::cout << "Enter your first name: " << std::flush;
    std::cin >> fname;
    return fname;
}

std::string getLastName(std::string lastName){
    std::cout << "Enter your first name: " << std::flush;
    std::cin >> lastName;
    return lastName;
}

void printFullName(std::string firstName, std::string lastName){
    std::cout << "Your full name is: " << firstName << " " << lastName << std::endl;
}