﻿#include<iostream>
using namespace std;
int main() {
	unsigned int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z;
	cout << "Difference is:" << x << endl; 
	x = z - y; cout << "\nNowdifferenceis:" << x << endl;
	return 0;
}