#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cin >> num;
	double a = pow(num, 2);
	double b = pow(num, 6);
	double c = pow(num, 7);
	double d = pow(num, 8);
	double e = pow(num, 9);
	double f = pow(num, 10);
	double g = pow(num, 13);
	double h = pow(num, 15);
	double i = pow(num, 21);
	double j = pow(num, 28);
	double k = pow(num, 64);

	cout << fixed << a << endl;
	cout << fixed << b << endl;
	cout << fixed << c << endl;
	cout << fixed << d << endl;
	cout << fixed << e << endl;
	cout << fixed << f << endl;
	cout << fixed << g << endl;
	cout << fixed << h << endl;
	cout << fixed << i << endl;
	cout << fixed << j << endl;
	cout << fixed << k << endl;

	return 0;
}