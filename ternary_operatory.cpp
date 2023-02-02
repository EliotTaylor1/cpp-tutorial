#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;

    int mark;
    const int PASS_MARK = 75;
    bool passed;

    cout << "Input your mark: " << flush;
    cin >> mark;
    
    mark >= PASS_MARK ? passed=1 : passed=0;
    //condition ? true expression : else expression

    passed ? cout << "You passed" << endl : cout << "You failed" << endl;
    //if checking a bool is true, no need to specify ==true or ==1. It is true by default

    cout << (mark % 2 ?  "number is odd" : "number is even") << endl;
    //can place within ()

    return 0;
}