#include <iostream>
#include <string>
void swap(int* num1, int* num2);
void add(int* num1, int*num2, int* total);
void sumArray(int* array, int size);
int main(){
    int x = 10;
    int y = 20;
    int total;
    int array[] = {5, 3, 2, 100};
    int sizeOfArray = sizeof(array)/sizeof(array[0]);
    std::cout << "The value of X is: " << x << std::endl;
    std::cout << "The value of Y is: " << y << std::endl;
    swap(&x, &y);
    std::cout << "The value of X is: " << x << std::endl;
    std::cout << "The value of Y is: " << y << std::endl;
    add(&x, &y, &total);
    std::cout << "The value of X is: " << x << std::endl;
    std::cout << "The value of Y is: " << y << std::endl;
    std::cout << "The total is: " << total << std::endl;
    sumArray(array,  sizeOfArray);
    return 0;
}

void swap(int* num1, int* num2){
    int temp;
    temp = *num1; //set temp to the value at the address of num1 (X=10)
    *num1 = *num2; //swap the value of num1 with whatever is at the address of num2
    *num2 = temp; //swap the value of num2 with the value of temp
}

void add(int* num1, int*num2, int* total){
   *total = *num1 + *num2;
}

void sumArray(int* array, int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + array[i];
    }
    std::cout << total << std::endl;
}