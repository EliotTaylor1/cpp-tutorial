#include <iostream>
#include <string>
#include <cctype>

void select_protocol(std::string &protocol, std::string &url);
void enter_url(std::string &url);
void add_directory(std::string &directory, std::string &url);
//create logic to enable adding multiple levels of directory
//create logic to allow removal of directories
//create logic to allow changing of protocol
//fix toupper so it works

int main(){
    std::string protocol, url, directory, result;
    enter_url(url);
    add_directory(directory, url);
    select_protocol(protocol, url);
    std::cout << url << std::endl;
    return 0;
}

void select_protocol(std::string &protocol, std::string &url){
    char decision;
    do 
    {
        std::cout << "Use https? (Y/N):  " << std::flush;
        std::cin >> decision;
        toupper(decision);
    }
    while (decision!= 'Y' && decision !='N');
    decision == 'Y' ? protocol = "https://" : protocol = "http://";
    url.insert(0, protocol);
}
void enter_url(std::string &url){
    std::string input;
    std::cout << "Enter url: " << std::flush;
    std::cin >> input;
    url = input;
}
void add_directory(std::string &directory, std::string &url){
    std::string input;
    std::cout << "Enter directory: /" << std::flush;
    std::cin >> input;
    directory = input;
    url.append("/" + directory);
}