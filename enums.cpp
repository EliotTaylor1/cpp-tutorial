#include <iostream> 

enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){

Day today = Sunday;

switch (today)
{
case Sunday:
    std::cout << "Today is Sunday" << std::endl;
    break;

default:
    break;
}

    return 0;
}