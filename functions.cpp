#include <iostream>
//function declarations
int getAge(int age); 
std::string getName(std::string username);
void greeting(std::string name, int age);

int main(){
    std::string name; //variable declarations
    int age;

    name = getName(name); //function calls
    age = getAge(age); //() contains arguments
    greeting(name, age);

    return 0;
}

int getAge(int age){ //()contains parameters for the function
    std::cout << "Enter your age: " << std::flush; //function definition
    std::cin >> age;
    return age;
}

std::string getName(std::string name){
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    return name;
}

void greeting(std::string name, int age){
    std::cout << "Hello " << name << " You are " << age << " Years old" << std::endl;
}