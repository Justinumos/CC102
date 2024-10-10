#include <iostream>
#include <cmath>
int main(){
	// Declare variables for coordinates
	double x1, y1, x2, y2;
	
	// Get user input for the coordinates
	std::cout << "Enter the coordinates of the first point (x1 y1): ";
	std::cin >> x1 >> y1;
	
	std::cout << "Enter the coordinates of the second point (x2 y2): ";
	std::cin >> x2 >> y1;
	
	//Calculate the distance using the distance formula
	double distance = std::sqrt(std::pow(x2 -x1,2)+std::pow(y2-x1,2));
	
	//Display the result
	std::cout << "The distance between the two points is: " <<distance << std::endl;
	
	return 0;

}