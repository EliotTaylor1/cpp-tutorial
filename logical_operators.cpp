#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    double temp;
    bool happy;
    char problem;

    cout << "Enter temperature: " << flush;
    cin >> temp;

    temp >= 18 && temp <=22 ? happy=1 : happy=0; //&& all must be true, || one must be true, ! is a negative operator e.g. !happy = bool happy is false.

    if(happy){
        cout << "Happy days! " << flush;
    }
    else{
        cout << "Are you too hot or too cold? (H/C)" << flush;
    }

    cin >> problem;

    switch (problem)
    {
    case 'H':
        cout << "You should open a window" << endl;
        break;
    case 'h':
        cout << "You should open a window" << endl;
        break;
    case 'C':
        cout << "You should turn on the heating" << endl;
        break;
    case 'c':
        cout << "You should turn on the heating" << endl;
        break;
    
    default:
        cout << "invalid response" << endl;
        break;
    }
    return 0;
}