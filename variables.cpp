#include <iostream>

using namespace std;
int main(){
    int x = 1; //inline declaration + assign
    std::cout << "The variable X equals " << x << std::endl;
    int y; //declaration
    y = 2; //separate assigment
    std::cout << "The variable Y equals " << y << std::endl;
    double z = 1.2; //decimal point variable
    std::cout << "The variable Z equals " << z << std::endl;
    std::cout << "The total of X + Y + Z equals " << x+y+z << std::endl; //cout can perform functions such as +

    int age = 19;
    char firstInitial = 'E'; //single character variable
    char secondInitial = 'T';
    string name = "Eliot"; //string variable
    bool is18; //boolean variabe
    const int DAILY_WORKING_HOURS = 7; //constant variables can't be changed. Usually named in all caps

    std::cout << "The first initial of your first name is: " << firstInitial << std::endl;
    std::cout << "The first initial of your second name is: " << secondInitial << std::endl;
    std::cout << "Your name is: " << name << std::endl;

    if(age>18){
        is18 = true;
        std::cout << "You are over 18" << std::endl;
    }
    else {
        is18 = false;
        std::cout << "You're not over 18" << std::endl;
    }

    if(is18 == true){
        std::cout << "Welcome" <<std::endl;
    }
    else {
        std::cout << "Access denied" << std::endl;
    }
    return 0;
}
