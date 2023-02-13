#include <iostream>

int GetElementPosition(std::string array[], int size, std::string item);
std::string GetElementValue(std::string array[], int size, int index);

int main(){
    std::string items[] = {"Cheese", "Ham", "Mushroom", "Egg"};
    int itemsArraySize = sizeof(items)/sizeof(items[0]);
    int index;
    std::string itemLookup;

    std::cout << "Enter the item you wish to find: " <<std::flush;
    std::getline(std::cin, itemLookup);
    index = GetElementPosition(items, itemsArraySize, itemLookup);

    std::cout << "Enter the entry you wish to get the value of: " <<std::flush;
    std::cin >> index;
    itemLookup = GetElementValue(items, itemsArraySize, index);
    return 0;
}

int GetElementPosition(std::string array[], int size, std::string item){
    for (int i = 0; i < size; i++)
    {
        if(array[i]==item){
            std::cout << "The item: " << item << " is located at position: " << i << " in the array." <<std::endl;
            return i;
        }
    }
    std::cout << "The item " << item << " is not in the array" << std::endl;
    return -1;
}

std::string GetElementValue(std::string array[], int size, int index){
    std::string entry;
    for (int i = 0; i < size; i++)
    {
        entry = array[i];
        if(i==index){
        std::cout << "The item at positon: " << i << " is " << entry << std::endl;
        return entry;
        }
    }
    std::cout << "Position " << index << " is not in the array." <<std::endl;
    return entry;
}