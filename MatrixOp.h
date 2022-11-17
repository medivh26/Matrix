#ifndef MATRIXOP_H
#define MATRIXOP_H
#include <iostream>
#include <string>
using namespace std;
class MatrixOp
{
	public:
		MatrixOp(string,int [][4]);
		~MatrixOp();
		void setUpper( int [][4]);
		void setLower(int [][4]);
		void setDiag( int [][4]);
		
		static int getRow(void);
		static int getColumn(void);
		string getID(void) const;
		static int getCount(void);
		void print(void) const;
		MatrixOp subtractUpper (const MatrixOp &m2);
		
	private:
		
		const static int row=4;
		const static int column=4;
		const string ID;
		static int count;
		int D [4][4];
		void printRow(const int );
		
		
};

#endif
