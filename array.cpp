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

    return 0;
}