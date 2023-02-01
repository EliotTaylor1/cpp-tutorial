#include <iostream>
#include <cmath>

int main(){

    double x = 5.2;
    double y = 7;
    double max;
    double min;
    double power;
    double squareroot;
    double absolute;
    double rounding;

    max = std::max(x,y); //gives the highest value from within ()
    min = std::min(x,y); //gives the lowest value from within ()
    power = pow(2,3); //gives the power of the values within ()
    squareroot = sqrt(9); //gives square root of the value within ()
    absolute = abs(-50); //gives the distance of the number within () from 0
    rounding = round(x); //rounds the number to closest whole number. Can use ceil() to force round up or floor() to force down
    std::cout << max << std::endl;
    std::cout << min << std::endl;
    std::cout << power << std::endl;
    std::cout << squareroot << std::endl;
    std::cout << absolute << std::endl;
    std::cout << rounding << std::endl;

    return 0;
}