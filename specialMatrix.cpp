#include "specialMatrix.h"
#include <string>
#include <iostream>

specialMatrix::specialMatrix(int mVal, int nVal) {
	m=mVal, n=nVal;
	const int two = 2;
	matrix = new int**[2];
	for (int h = 0; h<2; h++) {
		matrix[h] = new int*[m+1];
		for (int i = 0; i<m+1; i++) {
			matrix[h][i]=new int[n+1];
			for (int j = 0; j<n+1; j++) {
				matrix[h][i][j] = 0;
			}
		}
	}
}

specialMatrix::~specialMatrix() {
	for (int h = 0; h<2; h++) {
		for (int i = 0; i<m+1; i++) {
			delete [] matrix[h][i];
		}
		delete[] matrix[h];
	}
	delete [] matrix;
}

void specialMatrix::printMatrix() {
	cout<<"MATRIX:\n";
	for (int h = 0; h<2; h++) {
		cout<<"PART "<<h<<"\n";
		for (int i=0; i<m+1; i++) {
			for (int j=0; j<n+1; j++)
				cout<<matrix[h][i][j]<<" . . .";
			cout<<endl;
		}
		cout<<endl;
	}	
}