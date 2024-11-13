#include <iostream>
using namespace std;
int main() {
    
    char answer;
    cout << "Is the temperature less than 32 degrees? [y=yes]: ";
    cin >> answer;
    if (answer=='y') {
        cout << "Bring a heavy jacket";
    }
    else if(answer=='n') {
        cout << "Is the temperature between 30 and 50 degrees";
        cout << "Bring a light jacket";
    }
    else if(answer=='g') {
        cout << "Is the temperature greater than 50 degrees";
        cout << "Don't bring jacket";
        }
    return 0;
}