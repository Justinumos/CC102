
#include <iostream>
using namespace std;

int main() {
    int rows = 8;

    for (int i = rows; i >= 1; i--) {
        for (int k = rows - i; k > 0; k--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}