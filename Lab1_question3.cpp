#include <iostream>
using namespace std;
int main() {
	double a,b,sum,diff,product,quotient;
	cout << "Enter two numbers" << "\n";
	cin >> a >> b;
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	cout << "The sum =" << sum <<"\n";
	cout << "The difference is =" << diff << "\n";
	cout << "The product is =" << product << "\n";
	cout << "The quotient is =" << quotient << "\n";
	return 0;
}
