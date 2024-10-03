#include <iostream>
using namespace std;
int main(){
	string Nname, YL, school;
	cout << "Nickname: ";
	cin >> Nname;
	cout << "Course-Year Level: ";
	cin >> YL;
	cout << "School: ";
	cin >> school;
	
	cout << "Wow Congrats " << Nname << "! " << YL << "is a nice course. And you are studying in " << school << "which is one of the Center of Excellence in Tertiary Education.";
	return 0;
	
}