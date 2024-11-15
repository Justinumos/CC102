
#include <iostream>
#include <string>
using namespace std;

struct Movie {
    string name;
    int minAge;
    bool requiresAdult;
};

Movie movies[] = {
    {"Dragon ball Daima", 0, false}, 
    {"Transformers", 13, false}, 
    {"Deadpool", 16, true}, 
    {"Naturo", 0, false}, 
    {"Avengers", 13, false}, 
    {"The Exorcise", 18, true}
};

string determineMovieType(int age, bool withParent) {
    string suitableMovies;
    for (const auto& movie : movies) {
        if ((movie.minAge <= age && !movie.requiresAdult) || 
            (withParent && movie.requiresAdult)) {
            suitableMovies += movie.name + ", ";
        }
    }
    return suitableMovies;
}

int main() {
    int age;
    bool withParent;
    float money;
    bool isMatinee;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you with your parent? (yes/no): ";
    string input;
    cin >> input;
    withParent = input == "yes";

    cout << "How much money do you have? $";
    cin >> money;

    cout << "Is it a matinee? (yes/no): ";
    cin >> input;
    isMatinee = input == "yes";

    cout << "\nAge: " << age << ", With Parent: " << (withParent ? "yes" : "no") << 
         ", Money: $" << money << ", Matinee: " << (isMatinee ? "yes" : "no") << endl;

    cout << "Is this information correct? (yes/no): ";
    cin >> input;

    if (input == "no") {
        cout << "Please re-enter the correct information." << endl;
        return 1;
    }

    string suitableMovies = determineMovieType(age, withParent);
    float price = isMatinee ? 7.50f : 10.50f;

    if (money >= price) {
        cout << "\nYou can watch: " << suitableMovies << endl;
        cout << "Ticket price: $" << price << endl;
    } else {
        cout << "\nNo movies available due to insufficient funds." << endl;
    }

    return 0;
}
