#include <iostream>

int main(){

    //sizeof gets the memory size of a range of items e.g. Arrays.

    char grades[5];

    grades[0] = 'A';
    grades[1] = 'B';
    grades[2] = 'C';
    grades[3] = 'D';
    grades[4] = 'E';

    std::cout << sizeof(grades) << std::endl; //get the memory size of the array in bytes
    std::cout << sizeof(grades)/sizeof(char) << std::endl; //get the amount of elements in an array

    std::string names[] = {"Andy", "Billy", "Charlie", "Derek", "Eliot", "Fred"};

    std::cout << sizeof(names) << std::endl;
    std::cout << sizeof(names)/sizeof(std::string) << std::endl;

    return 0;
}