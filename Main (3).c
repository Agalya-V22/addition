#include <stdio.h>

int main() {
    printf("ATM Simulator - Demo Run\n");
    int pin = 1234, inputPIN = 1234;
    double balance = 5000;

    if (inputPIN != pin) {
        printf("Incorrect PIN.\n");
        return 0;
    }

    printf("Login Successful.\n");
    printf("Current Balance: ₹%.2f\n", balance);

    // Simulate a deposit
    double deposit = 1000;
    balance += deposit;
    printf("Deposited ₹%.2f | New Balance: ₹%.2f\n", deposit, balance);

    // Simulate a withdrawal
    double withdraw = 2000;
    if (withdraw <= balance) {
        balance -= withdraw;
        printf("Withdrew ₹%.2f | New Balance: ₹%.2f\n", withdraw, balance);
    } else {
        printf("Insufficient Balance.\n");
    }

    return 0;
}