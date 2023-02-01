#include <iostream>

int main(){
using std::cout;
using std::endl;

int correct = 8;
int questions = 10;

double mark = correct/(double)questions * 100; //(double) used to convert questions from int to double type

cout << mark << "%" << endl;

return 0;
}