#include <iostream>

std::string getFirstName(std::string firstName);
std::string getLastName(std::string lastName);
std::string concatName(std::string firstName, std::string lastName, std::string fullName);
void printFullName(std::string fullName);

int main(){

std::string firstName;
std::string lastName;
std::string fullName;

firstName = getFirstName(firstName);
lastName = getLastName(lastName);
fullName = concatName(firstName, lastName, fullName);

printFullName(fullName);

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

std::string concatName(std::string firstName, std::string lastName, std::string fullName){
    fullName = firstName + " " + lastName;
    return fullName;
}

void printFullName(std::string fullName){
    std::cout << "Your full name is: " << fullName << std::endl;
}