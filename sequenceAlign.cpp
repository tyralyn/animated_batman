#include "sequenceAlign.h"
#include <string>
#include <iostream>

using namespace std;
sequenceAlign::sequenceAlign(double mVal, double cVal, double dVal) {
	m = mVal;
	c = cVal;
	d = dVal;
	len1 = len2 = 0;
}

void sequenceAlign::putSequences(string s1, string s2) {
	seq1 = s1; seq2=s2;
	len1 = (int)seq1.length(); len2 = (int)seq2.length();
	matrix = new specialMatrix(len1, len2);
}

void sequenceAlign::printSequences() {
	cout<<"SEQ1: "<<len1<<" "<<seq1<<endl;
	cout<<"SEQ1: "<<len2<<" "<<seq2<<endl;
	matrix->printMatrix();
}
