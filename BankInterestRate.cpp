#include <iostream>
#include <string>

using namespace std;

int main() {
    double balance;
    string accountType, accountLevel;
    double interestRate = 0.0;

    cout << "Enter your bank account balance: ";
    cin >> balance;
    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;

    if (accountType == "Personal") {
        if (accountLevel == "Standard" && balance >= 0) {
            interestRate = 1.2;
        } else if (accountLevel == "Gold" && balance >= 1000) {
            interestRate = (balance >= 5000) ? 2.3 : 1.9;
        }
    } else if (accountType == "Business") {
        if (accountLevel == "Standard" && balance >= 1500) {
            interestRate = 1.7;
        } else if (accountLevel == "Platinum" && balance >= 10000) {
            interestRate = 2.5;
        }
    }

    if (interestRate > 0) {
        cout << "Your interest rate is: " << interestRate << "%" << endl;
    } else {
        cout << "No applicable interest rate found for the given account details, Please recheck and try again." << endl;
    }

    return 0;
}
