#include <iostream>

int main(){

    int* num1 = nullptr; //declare the pointer but assign it to nullptr to avoid undefined behaviour until we set the pointers address
    int x = 1233;
    num1 = &x;

    std::cout << "Address of int X: "<< &x <<std::endl;
    std::cout << "Address Num1 is pointing to: " << num1 << std::endl;
    std::cout << "Value of Int X: " << x << std::endl;
    std::cout << "Value at the address of Num1: " << *num1 << std::endl;

    return 0;
}