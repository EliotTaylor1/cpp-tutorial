#include <iostream>

struct Cars
{
    std::string model;
    std::string colour;
    int year;
};

void printCar(Cars car); //declare the function and give it the struct in its parameters
void paintCar(Cars &car);

int main(){
    Cars ford;
    ford.model = "Focus";
    ford.colour = "Green";
    ford.year = 2005;
       
    Cars mazda;
    mazda.model = "Speed";
    mazda.colour = "Red";
    mazda.year = 2007;

    Cars ferrari;
    ferrari.model = "F430";
    ferrari.colour = "Yellow";
    ferrari.year = 2009;

    printCar(ford);
    printCar(mazda);
    printCar(ferrari);

    std::string carChoice;
    std::cout << "Enter the car you wish to repaint: " << std::flush;
    std::getline(std::cin, carChoice);
    
    if(carChoice=="ford"){
        paintCar(ford);
        printCar(ford);
    }
    else if(carChoice=="mazda"){
        paintCar(mazda);
        printCar(mazda);
    }
    else if(carChoice=="ferrari"){
        paintCar(ferrari);
        printCar(ferrari);
    }
    else{
        std::cout << "not a valid car" << std::endl;
    }
}

void printCar(Cars car){
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Colour: " << car.colour << std::endl;
    std::cout << "Year: " << car.year << std::endl;
}

void paintCar(Cars &car){
    std::string newColour;
    std::cout << "Enter the new colour of the car: " << std::flush;
    std::getline(std::cin, newColour);
    car.colour = newColour;
}