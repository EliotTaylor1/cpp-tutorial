#include <iostream>


void showMenu();
double depositMoney(double deposit);
double withdrawMoney(double withdraw);
void getBalance(int balance);

int main(){

int selection;
double balance = 0;
double deposit;
double withdraw;
char exit = 'N';

std::cout << "Welcome to the banking app" << std::endl;

do
{
    showMenu();
    std::cin >> selection;
    switch (selection)
    {
    case 1:
        balance = balance + depositMoney(deposit);
        getBalance(balance);
        break;
    case 2:
        balance = balance - withdrawMoney(withdraw);
        getBalance(balance);
        break;
    case 3:
        getBalance(balance);
        break;
    case 4:
        exit = 'Y';
        break;
    default:
        break;
    }
} while (exit == 'N');
std::cout << "Ending program." << std::endl;
    return 0;
}

void showMenu(){
    std::cout << "|--Home--|" << std::endl;
    std::cout << "1. Deposit Money" << std::endl;
    std::cout << "2. Withdraw Money" << std::endl;
    std::cout << "3. View balance" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Please select your action: " << std::flush;
}

double depositMoney(double deposit){
std::cout << "Enter your deposit amount: " << std::flush;
std::cin >> deposit;
std::cout << "Deposit complete." << std::endl;
return deposit;
}
double withdrawMoney(double withdraw){
std::cout << "Enter your withdrawal amount: " << std::flush;
std::cin >> withdraw;
std::cout << "Withdrawal complete." << std::endl;
return withdraw;

}
void getBalance(int balance){
    std::cout << "Your current balance is: " << balance << std::endl;
}