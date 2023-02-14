#include <iostream>
int add(const int &x, const int &y);
int main(){
    int x = 5; 
    int y = 10; 
    int total;
    total = add(x, y);
    std::cout << total << std::endl;
    return 0;
}

int add(const int &x, const int &y){ //const prevents any varibles in the parameters from being altered
    int total;
    total = x + y;
    return total;
}