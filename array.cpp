#include <iostream>

int main(){

    int example[] = {0,1,2,3};

    std::cout << example[0] << std::endl;
    std::cout << example[3] << std::endl;

    int dec[4]; //can declare an array and populate each entry later

    dec[0] = 10;
    dec [1] = 20;
    dec [2] = 30;
    dec [3] = 40;

    std::cout << dec[2] <<std::endl;
    std::cout << "For loop start" << std::endl;

    for (int i = 0; i < sizeof(dec)/sizeof(int); i++) //iterate over the full array using a for loop.
    // use sizeof to iterate over all elements automatically without needing to enter a new 'i' value if the amount
    //of elements changes.
    {
        std::cout << dec[i] << std::endl;
    }
    

    return 0;
}