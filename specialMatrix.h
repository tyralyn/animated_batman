using namespace std;

class specialMatrix {
	private:
		int n, m;
		int*** matrix;
	public:
		specialMatrix(int mVal, int nVal);
		~specialMatrix();
		int getMatrixIndex(int i, int j);
		void makeMatrix();
		void printMatrix();
};