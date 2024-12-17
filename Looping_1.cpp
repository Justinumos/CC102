#include <iostream>
using namespace std;

int main() {
	int n = 7;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 1; j++) {
			cout << "";
			}
			for (int k = 0; k < 7; k++) {
			if((i + k == n - 4 || i == k)) {
					cout << "# "; }
					 else 
				 cout << " * "; 
				}
		cout << endl;	
	}		
	return 0;
}	