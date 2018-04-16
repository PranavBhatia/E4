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
		int vertices, edges;
		in >> vertices;
		in >> edges;

		int adjacencyMatrix[vertices][vertices] = { 0 };
		int verticesList[vertices];

		for (int currentEdge = 0; currentEdge < edges; currentEdge++) {
			int vertex1, vertex2;
			in >> vertex1;
			in >> vertex2;
			in >> adjacencyMatrix[vertex1][vertex2];

			adjacencyMatrix[vertex2][vertex1] =
					adjacencyMatrix[vertex1][vertex2];
		}

		for (int i = 0; i < vertices; i++) {
			verticesList[i] = i;
		}

		sort(verticesList, verticesList + vertices);
		do {
			int source = verticesList[0];
			int totalWeight = 0;

		} while (std::next_permutation(verticesList, verticesList + vertices));
	}
}

