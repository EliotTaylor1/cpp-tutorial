#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    std::string name;
    
    cout << "Please enter your name: " << flush;
    std::getline(cin, name);

    do //execute a block of code, and then only repeat it if the while statement is true.
    {
        cout << "Your entry was blank." << endl;
        cout << "Please enter your name: " << flush;
        std::getline(cin, name);
    } while (name.empty());
    
 cout << "Hello " << name << endl;
    return 0;
}