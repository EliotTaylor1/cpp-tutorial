#include <iostream>

void myPizza(std::string topping1){
    std::cout << "Your pizza has " << topping1 << " on top." << std::endl;
}
void myPizza(std::string topping1, std::string topping2){
    std::cout << "Your pizza has " << topping1 << " and " << topping2 << " on top." << std::endl;
}
void myPizza(std::string topping1, std::string topping2, std::string topping3){
        std::cout << "Your pizza has " << topping1 << " and " << topping2 << " and " << topping3 << " on top." << std::endl;
}

int main(){

 myPizza("cheese", "ham", "mushrooms"); //as the arguments increase the function changes to one which matches its parameters


    return 0;
}
