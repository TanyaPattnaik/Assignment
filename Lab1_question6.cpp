#include <iostream>
using namespace std;
int main() {
	double r,circum,area;
	cout << "Enter radius of circle" << "\n";
	cin >> r;
	circum=2*3.141*r;
	area=3.141*r*r;
	cout << "The circumference is " << circum << "\n";
	cout << "The area is " << area;
	return 0;
}
