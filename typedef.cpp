#include <iostream>
#include <vector>

int main(){
    using std::cout;
    using std::endl;
    using number_t = int; //using to shorten what could be a complex type. Using is more common than typedef
    typedef std::string txt_t; //typedef to shorten what could be a complex type
    number_t age = 24;
    txt_t name = "Eliot";
    cout << name << endl;
    cout << age << endl;
    return 0;
}