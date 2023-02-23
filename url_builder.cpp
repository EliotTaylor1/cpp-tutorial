#include <iostream>
#include <string>
#include <cctype>

void select_protocol(std::string &protocol, std::string &url, bool &isHttps);
void enter_url(std::string &url);
void add_directory(std::string &url);
void add_extra_directory(std::string &url);
void delete_last_directory(std::string &url);
void change_protocol(std::string &url, bool isHttps);
void show_menu();
void view_url(std::string url);

int main(){
    std::string protocol, url;
    bool isHttps;
    std::size_t input;
    enter_url(url);
    do
    {
        show_menu();
        std::cin >> input;
        switch (input)
        {
        case 1:
            view_url(url);
            break;
        case 2:
            add_directory(url);
            break;
        case 3:
            add_extra_directory(url);
            break;
        case 4:
            select_protocol(protocol, url, isHttps);
            break;
        case 5:
            change_protocol(url, isHttps);
            break;
        case 6:
            delete_last_directory(url);
            break;
        case 7:
            std::cout << "Ending" << std::endl;
            break;
        default:
            break;
        }
    } while (input != 7);
    

    return 0;
}

void select_protocol(std::string &protocol, std::string &url, bool &isHttps){
    char decision;
    do 
    {
        std::cout << "Use https? (Y/N):  " << std::flush;
        std::cin >> decision;
        decision = toupper(decision);
    }
    while (decision!= 'Y' && decision !='N');
    decision == 'Y' ? protocol = "https://" : protocol = "http://";
    url.insert(0, protocol);
    protocol == "https://" ? isHttps = 1 : isHttps = 0;
}
void enter_url(std::string &url){
    std::string input;
    std::cout << "Enter url: " << std::flush;
    std::cin >> input;
    url = input;
}
void add_directory(std::string &url){
    std::string input;
    std::cout << "Enter directory: /" << std::flush;
    std::cin >> input;
    url.append("/" + input);
}

void add_extra_directory(std::string &url){
    char decision;
    do
    {
        std::string input;
        std::cout << url << "/" << std::flush;
        std::cin >> input;
        url.append("/" + input);
        std::cout << "Would you like to add an extra directory level? Y/N: " << std::flush; 
        std::cin >> decision;
        decision = toupper(decision);
    } while (decision=='Y');
}

void delete_last_directory(std::string &url){
    int lastDirectoryPos = url.find_last_of("/");
    url.erase(lastDirectoryPos);
    std::cout << "Last directory deleted" << std::endl;
}

void change_protocol(std::string &url, bool isHttps){
    int protocolEndPos = url.find(":");
    if(isHttps == 1){
    url.replace(0, protocolEndPos, "http");
    }
    else{
        url.replace(0, protocolEndPos, "https");
    }
}

void show_menu(){
    std::cout << "************" << std::endl;
    std::cout << "1 - View current URL" << std::endl;
    std::cout << "2 - Add directory " << std::endl;
    std::cout << "3 - Add addition directory" << std::endl;
    std::cout << "4 - Select protocol" << std::endl;
    std::cout << "5 - Change protocol" << std::endl;
    std::cout << "6 - Remove directory" << std::endl;
    std::cout << "7 - Exit" << std::endl;
    std::cout << "************" << std::endl;
    std::cout << "\n";
}

void view_url(std::string url){
    std::cout << url << std::endl;
}