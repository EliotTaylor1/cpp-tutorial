#include <iostream>

int main(){

    int num1;
    int num2;
    char retry;

    do
    {
        std::cout << "enter first number: " << std::flush;
        std::cin >> num1;
        std::cout << "enter second number: " << std::flush;
        std::cin >> num2;

        if(num1==num2){
            std::cout << "The numbers match - ending" << std::endl;
            break;
        }
        else{
            std::cout << "the numbers did not match" << std::endl;
            std:: cout << "would you like to retry? Y/N: " << std::flush;
            std::cin >> retry;
        }
        
    } while (retry == 'Y');
    
    if(retry == 'N'){
        std::cout << "you chose not to retry - ending" << std::endl;
    }
    return 0;
}