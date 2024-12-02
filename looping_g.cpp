#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int columns = 19;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if ((i + j) % 2 == 0)
                cout << "^ ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
