#include<iostream>
using namespace std;

int main() {
	float applePrice, cookPrice, candyPrice;
	int appleCount, cookCount, candyCount;
	
	cout << "Enter how much cost each product: apples, cookies and candies for 1kg: ";
	cin >> applePrice >> cookPrice >> candyPrice;
	cout << "How much kg you buy apples, cookies and candies: ";
	cin >> appleCount >> cookCount >> candyCount;

	float appleTotalPrice = applePrice * appleCount;
	float cookTotalPrice = cookCount * cookPrice;
	float candyTotalPrice = candyCount * candyPrice;

	float totalSum = appleTotalPrice + cookTotalPrice + candyTotalPrice;
	cout << "Total sum: " << totalSum;
	return 0;
}