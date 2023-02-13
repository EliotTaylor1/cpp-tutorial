#include <iostream>

int returnElementValue(int results[], int resultsArraySize, int requestedElement);
int returnElementPosition(int results[], int resultsArraySize, int myNum);

int main(){

    int results[]= {100,200,300,400,500,600,700,800,900,1000};
    int resultsArraySize = sizeof(results)/sizeof(results[0]);
    int value;
    int location;
    int myNum;

    std::cout << "Enter element to retrieve value of: " << std::flush;
    std::cin >> myNum;
    value = returnElementValue(results, resultsArraySize, myNum);

    std::cout << "Enter the value to find its location: " << std::flush;
    std::cin >> myNum;
    location = returnElementPosition(results, resultsArraySize, myNum);
    return 0;
}

int returnElementValue(int results[], int resultsArraySize, int requestedElement){
    int value;
    for (int i = 0; i < resultsArraySize; i++)
    {
        value = results[i];
        if(i==requestedElement){
            std::cout << "The entry at record: " << i << " is: " << value << std::endl;
            break;
        }
    }
    return value;
}

int returnElementPosition(int results[], int resultsArraySize, int myNum){
for (int i = 0; i < resultsArraySize; i++)
{
    if(results[i]==myNum){
        std::cout << "The value " << myNum << " is at position: " << i << " in the array." << std::endl;
        return i;
    }
    
}

return -1;
}