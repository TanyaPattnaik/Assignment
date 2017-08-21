#include <iostream>
using namespace std;
int main() {
	double l,b,peri;
	cout << "Enter length and breadth of rectangle" << "\n";
	cin >> l >> b;
	peri=2*(l+b);
	cout << "The perimeter is " << peri;
	return 0;
}
