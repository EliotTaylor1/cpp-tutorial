#include <iostream>

int main(){
using std::cout;
using std::cin;
using std::endl;
using std::flush;
using std::string;

cout << "Please input username:" << flush;
string username;
std::getline(cin >> std::ws, username); //getline enables a string to contain white spaces. 
//                                      ws will clear any newline or white spaces before taking the user input

int age;
cout << "Please input age:" << flush;
cin >> age;

cout << "Welcome " << username << endl;
cout << "You're " << age << " years old." << endl;

    return 0;
}