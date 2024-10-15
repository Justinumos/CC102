#include <iostream>
using namespace std;
int main() {

	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarQty,riceQty, sardinesQty, coffeeQty, milkQty;
	float pOS=60.00, kOR=55.00, pOSRD=25.00, pOC=25.00, pOM=56.00;
	
	cout << "Sugar, Rice, Sardines, Coffee, and Milk program\n";
	cout << "----------------------------------------------------------------------------------\n";
	cout << "Quantity of Sugar, Rice, Sardines, Coffee, and Milk: ";
	cin >> sugarQty,riceQty, sardinesQty, coffeeQty, milkQty;
	
	cout << "Price of Sugar\t\t\t:\t$ " << pOS << " /Qty" << endl;
	cout << "Price of Rice\t\t\t:\t: USD " << kOR << " /Qty" << endl;
	cout << "Price of Sardines\t\t\t:\t$ " << pOSRD << " /Qty" << endl;
	cout << "Price of Coffee\t\t\t:\t$ " << pOC << " /Qty" << endl;
	cout << "Price of Milk\t\t\t:\t$ " << pOM << " /Qty" << endl;
	cout << "----------------------------------------------------------------------------------\n";

	return 0;
}