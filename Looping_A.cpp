#include <iostream>
using namespace std;

int main() {
	int rows = 8;
	for (int i = 1; i <= rows; i++) {
		if (i % 2 != 0) {
			for (int j = 1; j <= 1; j++) {
			cout << " ";
			}
		}
			for (int j = 1; j <= 5; j++) {
			cout << "# + ";
			}
			cout << endl;	
	}		
	return 0;
}	