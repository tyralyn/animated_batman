#include <string>
#include "specialMatrix.h"

using namespace std;
class sequenceAlign{
	private:
		string seq1, seq2;
		int len1, len2;
		double m,c,d;
		specialMatrix* matrix;
		
	public:
	sequenceAlign(double mVal, double cVal, double dVal);
	void putSequences(string s1, string s2);
	void printSequences();
	void makeMatrix();
	void printMatrix();
	int getMatrixIndex(int i, int j);
};