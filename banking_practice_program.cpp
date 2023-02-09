#include <iostream>


void showMenu();
double depositMoney(double deposit);
double getWithdrawValue(double withdraw);
bool checkNegativeBalance(bool negativeBalance, int balance, int withdraw);
double makeWithdrawal(double withdraw, double balance);
void getBalance(int balance);

int main(){

int selection;
double balance = 0;
double deposit;
double withdraw;
bool negativeBalance = 0;
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
        withdraw = getWithdrawValue(withdraw);
        negativeBalance = checkNegativeBalance(negativeBalance, balance, withdraw);
        if(negativeBalance==0){
        balance = makeWithdrawal(withdraw, balance);
        getBalance(balance);
        }
        if(negativeBalance==1){
        getBalance(balance);
        }
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

double getWithdrawValue(double withdraw){
std::cout << "Enter your withdrawal amount: " << std::flush;
std::cin >> withdraw;
return withdraw;
}

void getBalance(int balance){
    std::cout << "Your current balance is: " << balance << std::endl;
}

bool checkNegativeBalance(bool negativeBalance, int balance, int withdraw){
    if(withdraw > balance){
        std::cout << "You don't have sufficient funds." << std::endl;
        std::cout << "Aboring withdrawal." << std::endl;
        negativeBalance = 1;
    }
    if (withdraw < balance){
        negativeBalance = 0;
    }
    return negativeBalance;
}

double makeWithdrawal(double withdraw, double balance){
    balance = balance - withdraw;
    return balance;
}