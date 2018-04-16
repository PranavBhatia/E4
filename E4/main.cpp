/*
 * main.cpp
 *
 *  Created on: Apr 16, 2018
 *      Author: Pranav Bhatia
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <sstream>

using namespace std;
int main(int argc, char* argv[]) {

	ifstream in(argv[1]);
	if (!in) {
		cout << "Cannot open  input file;" << endl;
		return -1;
	}

	ofstream out(argv[2]);

	if (!out) {
		cout << "Cannot open  output file;" << endl;
		return -1;
	}

	int testCases;
	in >> testCases;

	for (int m = 0; m < testCases; m++) {

	}
}




