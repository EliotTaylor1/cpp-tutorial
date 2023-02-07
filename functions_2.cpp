#include <iostream>

double getLength(double length);
double getArea(double length);
double getVolume(double length);

int main(){

double length = getLength(length);
double area = getArea(length);
double volume = getVolume(length);

    std::cout << "The length you entered was: " << length << std::endl;
    std::cout << "The area is: " << area << std::endl;
    std::cout << "The voulume is: " << volume << std::endl;
    return 0;
}

double getLength(double length){
    std::cout << "Enter length: " << std::flush;
    std::cin >> length;
    return length;
}

double getArea(double length){
    double area = length * length;
    return area;
}

double getVolume(double length){
    double volume = length * length * length;
    return volume;
}