#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::flush;
double num1;
double num2;
double answer;
char function;

    cout << "Enter first number: " << flush;
    cin >> num1;

    cout <<"Enter your operator: " << flush;
    cin >> function;

    cout << "Enter your second number: " << flush;
    cin >> num2;

    switch (function)
    {
    case '+':
        answer = num1 + num2;
        cout << num1 << " + " << num2 << " = " << answer << endl;
        break;
    case '-':
        answer = num1 - num2;
        cout << num1 << " - " << num2 << " = " << answer << endl;
        break;
    case '*':
        answer = num1 * num2;
        cout << num1 << " * " << num2 << " = " << answer << endl;
        break;
    case '/':
        answer = num1 / num2;
        cout << num1 << " / " << num2 << " = " << answer << endl;
        break;
    case '>':
        answer = std::max(num1, num2);
        cout << "The bigger number is: " << answer << endl;
        break;
    case '<':
        answer = std::min(num1, num2);
        cout << "The smaller number is: " << answer << endl;
        break;
    default:
    cout << "Please enter a valid operator" << endl;
        break;
    }

    return 0;
}