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
using std::cout; //removes the need for std::cout every time we use cout
using std::endl;

    cout << "int = " << x << endl;
    cout << "int = " << second::x << endl; // define the namespace scope specifically with 'second::'
    return 0;
}