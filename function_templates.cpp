#include <iostream>
template <typename T, typename U> //template parameter declaration (what type T and U stand for)
auto max(T num1, U num2){ //create an overloaded function without needing to specify the type
                          //use auto so the compliler can work out the best type to return the function as
    return num1 > num2 ? num1 : num2;
}

int main(){
    std::cout << max(1,2.2) << " is bigger" << std::endl;
    return 0;
}   