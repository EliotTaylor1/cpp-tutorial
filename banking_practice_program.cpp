#include <iostream>


void showMenu();
double getDepositValue();
double depositMoney(double balance, double deposit);
double getWithdrawValue();
bool checkNegativeBalance(int balance, int withdraw);
double makeWithdrawal(double balance, double withdraw);
void getBalance(int balance);
bool checkValidDeposit(double deposit);

int main(){

int selection;
double balance = 0;
double deposit;
double withdraw;
bool negativeBalance = 0;
bool checkDeposit;
char exit = 'N';

std::cout << "Welcome to the banking app" << std::endl;

do
{
    showMenu();
    std::cin >> selection;
    switch (selection)
    {
    case 1: //deposit money
        deposit = getDepositValue();
        checkDeposit = checkValidDeposit(deposit);
        if(checkDeposit==1){
        balance = balance + depositMoney(balance, deposit);
        getBalance(balance);
        }
        if(checkDeposit==0){
        std::cout << "Aborting deposit." << std::endl; 
        }
        break;
    case 2: //make withdrawal
        withdraw = getWithdrawValue();
        negativeBalance = checkNegativeBalance(balance, withdraw);
        if(negativeBalance==0){
        balance = balance - makeWithdrawal(balance, withdraw);
        getBalance(balance);
        }
        if(negativeBalance==1){
        getBalance(balance);
        }
        break;
    case 3: //check balance
        getBalance(balance);
        break;
    case 4: //exit
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

double getDepositValue(){
    double deposit;
    std::cout << "Enter your deposit amount: " << std::flush;
    std::cin >> deposit;
    return deposit;
}

double depositMoney(double balance, double deposit){
    balance = balance + deposit;    
    std::cout << "Deposit complete." << std::endl;
    return deposit;
}

bool checkValidDeposit(double deposit){
    bool checkDeposit;
    if(deposit>0){
        return checkDeposit=1;
    }
    else{
        std::cout << "Not a valid deposit amount." << std::endl;
       
        return checkDeposit=0;
    }
}

double getWithdrawValue(){
    double withdraw;
    std::cout << "Enter your withdrawal amount: " << std::flush;
    std::cin >> withdraw;
return withdraw;
}

void getBalance(int balance){
    std::cout << "Your current balance is: " << balance << std::endl;
}

bool checkNegativeBalance(int balance, int withdraw){
    bool negativeBalance;
    if(withdraw > balance){
        std::cout << "You don't have sufficient funds." << std::endl;
        std::cout << "Aborting withdrawal." << std::endl;
        return negativeBalance = 1;
    }
    else{
       return negativeBalance = 0;
    }
}

double makeWithdrawal(double balance, double withdraw){
    balance = balance - withdraw;
    return balance;
}