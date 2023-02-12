#include <iostream>

int main(){


    int dec[4]; 
    dec[0] = 10;
    dec [1] = 20;
    dec [2] = 30;
    dec [3] = 40;

    for(int nums : dec){ //declare a new variable : name of array.
        std::cout << nums <<std::endl;
    }
    return 0;
}