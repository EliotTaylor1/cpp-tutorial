#include <iostream>
#include <ctime>


int main(){

char retry;

        std::cout << "#### Random Event Generator ####" << std::endl;
    do
    {
    srand(time(0));
    int randNum=rand() % 5 +1;

    switch (randNum)
    {
    case 1:
        std::cout << "It is the first event" << std::endl;
        break;

    case 2:
        std::cout << "It is the second event" << std::endl;
        break;

    case 3:
        std::cout << "It is the third event" << std::endl;
        break;

    case 4:
        std::cout << "It is the fourth event" << std::endl;
        break;

    case 5:
        std::cout << "It is the fifth event" << std::endl;
        break;
    
    default:
        std::cout << "This shouldn't have happened" << std::endl;
        break;
    }
    std::cout << "Would you like to generate another event? Y/N: " << std::flush;
    std::cin >> retry;

    }while(retry == 'Y' || retry =='y');

    std::cout << "Ending..." << std::endl;

    return 0;
}