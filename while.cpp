#include <iostream>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;
    
    std::string name;

    cout << "Please enter your name: " << flush;
    std::getline(cin, name);

    while(name.empty()){ //loops through the code if and then checks if the statement is still true, if it is it loops again
        cout << "Your entry was blank" << endl;
        cout << "Please enter your name: " << flush;
        std::getline(cin, name);
    }

    cout << "Hello " << name << endl;
    return 0;
}