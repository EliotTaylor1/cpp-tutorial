#include <iostream>
#include <vector>
void displayMenu();
void getInput(int &input);
void displayStock(std::vector<int> items);
void purchaseItem(std::vector<int> &items);
void addNewItem(std::vector<int> &items);
void removeItem(std::vector<int> &items);
void adjustStock(std::vector<int> &items);

int main(){
    std::vector<int> stock = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

    char exit = 'N';
    int input;
    std::cout << "***** Welcome *****" << std::flush;
    do
    {
        std::cout << "\n";
        displayMenu();
        getInput(input);
        switch (input)
        {
        case 1:
            displayStock(stock);
            break;
        case 2:
            purchaseItem(stock);
            break;
        case 3:
            addNewItem(stock);
            break;
        case 4:
            removeItem(stock);
            break;
        case 5:
            adjustStock(stock);
            break;
        case 6:
            exit = 'Y';
            break;
        default:
            break;
        }
    } while (exit=='N');
    std::cout << "Ending." << std::endl;
    return 0;
}

void displayMenu(){

    std::cout << "*******************" << std::endl;
    std::cout << "1. View Stock Levels" << std::endl;
    std::cout << "2. Purchase Item" << std::endl;
    std::cout << "3. Add New Item" << std::endl;
    std::cout << "4. Remove Item" << std::endl;
    std::cout << "5. Adjust Stock" << std::endl;
    std::cout << "6. Cancel" << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << "\n";
}

void getInput(int &input){
    std::cout << "Please select the action you wish to perform: " << std::flush;
    do
    {
    std::cin >> input;
        if(input >6 || input <1){
        std::cout << "Please enter a valid number" << std::endl;
        }
    } while (input >6 || input <1);
    std::cout << "\n";
}

void displayStock(std::vector<int> items){
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << "Item " << i+1 << " has a stock level of " << items[i] << std::endl;
    }
    
}

void purchaseItem(std::vector<int> &items){
    int item;
    int amount;
    do
    {     
    std::cout << "Enter the ID of the item you wish to purchase" << std::endl;
    std::cout << "ID: " << std::flush;
    std::cin >> item;
    if (item>items.size())
    {
        std::cout << "You entered an invalid item ID. " << std::endl;
        std::cout << "Please enter an ID between: 1-" <<items.size() <<std::endl;
    }
    } while (item<1 || item>items.size());
    
    do
    {
    std::cout << "Enter the amount of the item you wish to buy: " << std::flush;
    std::cin >> amount;
    if (amount>items.at(item-1)){ //offset input by 1 to cater for displaying first element as pos1 instead of pos0
        std::cout << "The value you entered is greater than the amount of available stock." << std::endl;
        std::cout << "Available stock: " << items.at(item-1) << std::endl;
    }
    } while (amount>items.at(item-1));
    items.at(item-1) -=amount; //update item at input-1 (offset due to display+1)
}

void addNewItem(std::vector<int> &items){
    int amount;
    do
    {
    std::cout << "Enter your amount of new item: " << std::flush;
    std::cin >> amount;
    if (amount<=0)
    {
        std::cout << "New amount must be greater than or equal to 0." << std::endl;
    }
    } while (amount<=0);
    items.push_back(amount);
    std::cout << "New item has been added to the machine." << std::endl;
    std::cout << "New item is at position: " << items.size() << " and has a stock level of: " << items.back() << std::endl;
}

void removeItem(std::vector<int> &items){
    int input;
    do
    {
        std::cout << "Enter the ID of the item you wish to remove: " << std::flush;
        std::cin >> input;
        if (input<1 || input>items.size())
        {
            std::cout << "Please enter an item ID between 1-" << items.size() << std::endl;
        }
    } while (input <1 || input>items.size());
    items.erase(items.begin()+input-1); //remove the item starting at the first element + the number entered
                                        //-1 for display offset vs actual element position
}

void adjustStock(std::vector<int> &items){
    int item;
    int amount;
    do
    {
    std::cout << "Enter the item you want to change the stock level of: " << std::flush;
    std::cin >> item;
    if (item>items.size())
    {
        std::cout << "You entered an invalid item ID. " << std::endl;
        std::cout << "Please enter an ID between: 1-" <<items.size() <<std::endl;
    }
    } while (item<1 || item>items.size());
    
    do
    {
    std::cout << "Enter the new stock level: " << std::flush;
    std::cin >> amount;
    
        if (amount<=0)
    {
        std::cout << "New amount must be greater than or equal to 0." << std::endl;
    }
    } while (amount<0);
    items.at(item-1) = amount;
}