#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << b << c << endl;
	b = c; a = b; c = a;
	cout << a << b << c << endl;
	b = a; c = b; a = c;
	cout << a << b << c << endl;
	return 0;
}