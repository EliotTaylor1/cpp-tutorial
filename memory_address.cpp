#include <iostream>

void IntSwap(int &x, int &y);
void StringSwap(std::string &firstName, std::string &lastName);
void CharSwap(char &initial1, char &initial2);

int main(){
    int x = 10;
    int y = 50;

    std::cout << "Memory address of X is: " << &x << std::endl;
    std::cout << "Memory address of Y is: " << &y << std::endl;

    std::string firstName = "Eliot";
    std::string lastName = "Taylor";

    char initial1 = 'E';
    char initial2 = 'T';

    std::cout << "X is: " << x << std::endl;
    std::cout << "Y is: " << y << std::endl;
    std::cout << "First Name is: " << firstName << std::endl;
    std::cout << "Last Name is: " << lastName << std::endl;
    std::cout << "First Initial is: " << initial1 << std::endl;
    std::cout << "Second Initial is: " << initial2 << std::endl;

    std::cout << "Performing swaps" << std::endl;

    IntSwap(x, y);
    StringSwap(firstName, lastName);
    CharSwap(initial1, initial2);

    std::cout << "X is: " << x << std::endl;
    std::cout << "Y is: " << y << std::endl;
    std::cout << "First Name is: " << firstName << std::endl;
    std::cout << "Last Name is: " << lastName << std::endl;
    std::cout << "First Initial is: " << initial1 << std::endl;
    std::cout << "Second Initial is: " << initial2 << std::endl;
    return 0;
}

void IntSwap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void StringSwap(std::string &firstName, std::string &lastName){
    std::string temp;
    temp = firstName;
    firstName = lastName;
    lastName = temp;
}
void CharSwap(char &initial1, char &initial2){
    char temp;
    temp = initial1;
    initial1 = initial2;
    initial2 = temp;
}