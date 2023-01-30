#include <iostream>

/*
Namespaces allow you to reuse variable names within the same project, without getting an error
*/

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
using namespace first; //define the namespace for the whole function
    std::cout << "int = " << x << std::endl;
    std::cout << "int = " << second::x << std::endl; // define the namespace scope specifically with 'second::'
    return 0;
}