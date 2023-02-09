#include <iostream>

int addNumbers(int num1, int num2){
 return num1 + num2;
}

int addNumbers(int num1, int num2, int num3){
    return num1*num2+num3;
}

int addOne(int num){
    return num+1;
}

int main(){

    int x = 5;
    int y = 10;
    int z = 100;
    int total;

    total = addNumbers(x, y);

    std::cout << total << std::endl;

    total = addNumbers(z, y, x);

    std::cout << total << std::endl;

    total = addOne(total);
    std::cout << total << std::endl;

    return 0;
}