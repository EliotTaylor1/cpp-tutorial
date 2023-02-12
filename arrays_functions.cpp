#include <iostream>

int getTotal(int results[], int arraySize);

int main(){
    int total;

    int results[] = {5,1,2,3,5,10,1,1,2,9};
    int resultArraySize = sizeof(results)/sizeof(results[0]); //get the amount of entries in the array to pass to function
    total = getTotal(results, resultArraySize);

    std::cout << total << std::endl;
    
    return 0;
}

int getTotal(int results[], int arraySize){
    int total = 0;
    
    for (int i = 0; i < arraySize; i++)
    {
        total = total + results[i];
        
    }
    return total;
}