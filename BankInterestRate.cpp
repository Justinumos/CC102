
#include <iostream>
using namespace std;

float calculateInterestRate(float balance, string accountType, string accountLevel) {
    float rates[][2] = {
        // Standard
        {0, 1.9}, {1000, 1.2},
        // Gold
        {5000, 2.3}, {1500, 1.7},
        // Platinum
        {10000, 2.5}, {0, 0}  // Rate not specified, assume 0
    };

    int index;
    if (accountType == "Standard") index = 0;
    else if (accountType == "Gold") index = 2;
    else if (accountType == "Platinum") index = 4;

    if (accountLevel == "Personal") {
        if (balance >= rates[index][0]) return rates[index][1];
        else return rates[0][1];  // Default to Standard Personal
    } else {  // Business
        index++;
        if (balance >= rates[index][0]) return rates[index][1];
        else return rates[1][1];  // Default to Standard Business
    }
}

int main() {
    float balance;
    string accountType;
    string accountLevel;

    cout << "Enter your bank account balance: $";
    cin >> balance;

    cout << "Enter your account type (Standard, Gold, Platinum): ";
    cin >> accountType;

    cout << "Enter your account level (Personal, Business): ";
    cin >> accountLevel;

    float interestRate = calculateInterestRate(balance, accountType, accountLevel);
    cout << "\nYour interest rate is: " << interestRate << "%" << endl;

    return 0;
}
    