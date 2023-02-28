#include <iostream>

struct student //create the struct 
{
    std::string name; //declare the members (variables) and their types
    int age;
    bool isActive = 0; //can set a default value of a member
    char grade;
};

int main(){
    student student1; 
    student1.name = "Eliot"; //use the . to access a member (variable)
    student1.age = 24;
    student1.isActive = true;
    student1.grade = 'A';

    student student2;
    student2.name = "James";
    student2.age = 24;
    //student2.isActive = true;

    std::cout << student1.name << std::endl;
    std::cout << student1.isActive << std::endl;
    std::cout << student2.name << std::endl;
    std::cout << student2.isActive << std::endl; //even though we don't set the value, 
                                                //it inherits the default value of the member from the struct
    return 0;
}   