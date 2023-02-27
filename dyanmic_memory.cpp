#include <iostream>

int main(){
    std::string* sentance = NULL;
    sentance = new std::string; //'new' allocates additional memory to the heap after the program has compiled

    std::cin >> *sentance;

    std::cout << *sentance << std::endl;

    delete sentance; //'delete' removes the allocated memory from the heap
    return 0;
}

//useful when we don't know the size of a variable before it is used e.g. when accepting user input