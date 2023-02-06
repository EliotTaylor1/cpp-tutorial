#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: " << flush;
    cin >> rows;

    cout << "How many columns?: " << flush;
    cin >> columns;

    cout << "What character/symbol?: " << flush;
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <=columns; j++)
        {
            cout << symbol << flush;
        }
        cout << endl;
    }

    return 0;
}