#include <iostream>
using namespace std;

int main() {
    int n = 8;  // Number of rows
    
    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // For even rows (1, 3, 5, 7... - starting from 1)
        if (i % 2 != 0) {
            // Print spaces first
            for (int j = 1; j <= 1; j++) {  // 1 space for these rows
                cout << " ";
            }
        }
        
        // Print the pattern # + repeated 5 times
        for (int j = 1; j <= 5; j++) {
            cout << "# + ";
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
