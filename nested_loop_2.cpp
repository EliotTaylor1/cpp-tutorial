#include <iostream>

int main(){
    using std::cout;
    using std::endl;
    using std::flush;

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <=7; j++)
        {
            cout << "|" << flush;
        }
        cout << endl;
    }

    return 0;
}