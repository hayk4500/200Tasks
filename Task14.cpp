#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int cubeSide; cin >> cubeSide;
	double cubeVolume = pow(cubeSide, 3);
	double cubeLatSquare = 4 * (pow(cubeSide, 2));

	cout << "Vol: " << cubeVolume << endl;
	cout << "LatSqr: " << cubeLatSquare << endl;
	return 0;
}