#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    double length;
    double height;
    double hypotenuse;

    cout << "enter length: " << flush;
    cin >> length;

    cout << "enter height: " << flush;
    cin >> height;

    hypotenuse = sqrt(pow(height,2) + pow(length,2));
    cout << "The hypotenuse of your triage is: " << hypotenuse << endl;

    return 0;
}