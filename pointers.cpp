#include <iostream>
void swap(int* num);
int main(){
    int x = 50;
    int* p = &x; //create the pointer type variable with * and set it to the address of X
    std::cout << &x << std::endl; //show the address of X
    std::cout << p << std::endl; //as p is a pointer type this shows the address of X as thats what we pointed it to
    std::cout << *p << std::endl; //using * as a dereference operator shows us the value at the memory address we pointed to
    swap(p); //swap the value at the memory address p is pointing to
    std::cout << &x << std::endl;
    std::cout << x << std::endl; //Value of X is now 500 as we changed the value of P which uses the same memory address due to the pointer
    std::cout << p << std::endl; //as p is a pointer type this shows the address of X as thats what we pointed it to
    std::cout << *p << std::endl; //Value of p is also 500 as it shares the same memory address as X
    return 0;
}

void swap(int* num){
    *num = 500;
}