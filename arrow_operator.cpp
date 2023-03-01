#include <iostream>
struct User
{
    std::string name;
    std::string password;
    int age;
};

int main(){

    User eliot;
    eliot.name = "Eliot Taylor";
    eliot.password = "1234";
    eliot.age = 24;

    std::string* ptrName = &eliot.name;

    std::cout << ptrName->length() <<std::endl;
    (*ptrName).append("2");
    ptrName->append("1");
    std::cout << *ptrName <<std::endl;

std::string name = "Bill";

std::string* pName = &name;
std::cout << (*pName).length() << std::endl; //to get the length we would need to dereference the pointer first
std::cout << pName->length() << std::endl; //instead of dereferencing we can use the -> operator
    return 0;
}