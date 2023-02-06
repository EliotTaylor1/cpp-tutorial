#include <iostream>

int main(){

    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    for (int i = 0; i <= 20; i++)
    {
        cout << "The current iteration is: " << i << endl;
        if(i==13){
            cout << "skipping 13" << endl;
            continue; //continue skips the current iteration (13) and then carries on working through the loop.
        }
        if(i==19){
            cout << "reached 19 - ending loop" << endl;
            break; //break ends the loop and moves onto the next part of the code.
        }

    }
    

    return 0;
}