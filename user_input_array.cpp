#include <iostream>

int main()
{
    std::string shoppingList[10];
    std::string temp;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter your shopping list item: " << std::flush;
        std::getline(std::cin, temp);
        std::cout << "Item added." << std::endl;
        if (temp == "End")
        {
            std::cout << "You have chosen to end the list." << std::endl;
            break;
        }
        else
            shoppingList[i] = temp;
        {
        
        }
    }

    std::cout << "Your shopping list has the following items on it: " << std::endl;

    for (int i =0; !shoppingList[i].empty(); i++)
    {
        std::cout << shoppingList[i] << std::endl;
    }
    return 0;
}