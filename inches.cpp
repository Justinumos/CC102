#include<iostream>
using namespace std;

int main()
{
    //inches to feet factor
    const int int2feet = 12;
    
    int inches; //number of inches
    int feet; //number of feet
    
    cout << "Enter the number in inches";
    cin >>inches;
    
    //convert inches to feet and inches
    feet = inches / int2feet;
    inches= inches  % int2feet;
    cout << feet << inches << "inches" << endl;
    return 0;
}