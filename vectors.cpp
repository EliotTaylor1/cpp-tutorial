#include <iostream>
#include <vector>
void insertNum(std::vector<int> &vector);
void displayVector(std::vector<int> vector);
int main(){
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    insertNum(numbers);
    displayVector(numbers);
    return 0;
}

void insertNum(std::vector<int> &vector){
    int input;
    std::cout << "Enter your number: " << std::flush;
    std::cin >> input;
    vector.push_back(input);
}

void displayVector(std::vector<int> vector){
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << "The value at position " << i << " is " << vector[i] << std::endl;
    }
    
}