#include <iostream>

void SortArray(int array[], int size);

int main(){
    int numberSequence[] = {1,9,2,8,3,7,4,6,5};
    int numberSequenceSize = sizeof(numberSequence)/sizeof(numberSequence[0]);
    for (int i = 0; i < numberSequenceSize; i++)
    {
        std::cout << numberSequence[i] << " " << std::flush;
    }
    std::cout << "Ordering array..." << std::endl;
    SortArray(numberSequence, numberSequenceSize);

    for (int i = 0; i < numberSequenceSize; i++)
    {
        std::cout << numberSequence[i] << " " << std::flush;
    }

    return 0;
}

void SortArray(int array[], int size){
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(array[j] > array[j +1]){
                temp = array[j];
                array[j] = array[j +1];
                array[j+1] = temp;
            }
        }
        
    }
    
}