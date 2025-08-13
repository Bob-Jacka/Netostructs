#include "libio.hpp"

struct BankAccount {
    int account_number{0};
    std::string account_owner;
    double account_balance{0.0};
};

void changeBalance(BankAccount &account, double newBalance) {
    account.account_balance = newBalance;
}

void printAccount(const BankAccount &account) {
    libio::print("Ваш счёт: ");
    libio::print(account.account_owner, ", ");
    libio::print(account.account_number, ", ");
    libio::print(account.account_balance, "");
}

int main() {
    int account_number;
    std::string account_owner;
    double balance;
    BankAccount bankAccount{};
    double newBalance;

    libio::print("Введите номер счёта: ");
    libio::userInput(account_number);

    libio::print("Введите имя владельца: ");
    libio::userInput(account_owner);

    libio::print("Введите баланс: ");
    libio::userInput(balance);

    bankAccount = {
            .account_number = account_number,
            .account_owner = account_owner,
            .account_balance = balance
    };

    libio::print("Введите новый баланс: ");
    libio::userInput(newBalance);
    changeBalance(bankAccount, newBalance);

    printAccount(bankAccount);
}
