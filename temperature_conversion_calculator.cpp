#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    double temp;
    char unit;
    double farenheit;
    double celsius;

    cout << "input temperature: " << flush;
    cin >> temp;
    cout << "Is that farenheit or celsius? (C/F?): " << flush;
    cin >> unit;

    switch (unit)
    {
    case 'C':
        farenheit = temp * 1.8 + 32;
        cout << temp << " degrees Celsius is equal to " << farenheit << " degrees Farenheit." << endl;
        break;
    case 'c':
        farenheit = temp * 1.8 + 32;
        cout << temp << " degrees Celsius is equal to " << farenheit << " degrees Farenheit." << endl;
        break;
    case 'F':
        celsius = (temp - 32) * 0.5556;
        cout << temp << " degrees Farenheit is equal to " << celsius << " degrees Celsius." << endl;
        break;
    case 'f':
        celsius = (temp - 32) * 0.5556;
        cout << temp << " degrees Farenheit is equal to " << celsius << " degrees Celsius." << endl;
        break;
    default:
    cout << "invalid endtry" << endl;
        break;
    }

    return 0;
}