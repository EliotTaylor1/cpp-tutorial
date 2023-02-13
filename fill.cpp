#include <iostream>

int main(){
    std::string foods[20];

    fill(foods, foods + 20, "Pizza"); //fill(begin at, end at, value)

    for (std::string food : foods)
    {
        std::cout<< food <<std::endl;
    }
    
    const int FOODLIMIT=25;
    std::string ingredients[FOODLIMIT];

    fill(ingredients, ingredients + FOODLIMIT, "Eggs");

    for(std::string ingredient : ingredients){
        std::cout << ingredient << std::endl;
    }


    return 0;
}