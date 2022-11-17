#include <iostream>
#include "MatrixOp.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	cout<< "Number of matrices before instantiation of any object is" << MatrixOp::getCount()<<endl;
	{
		int a1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		MatrixOp m1("m1",a1);
		m1.print();
		
		int a2[4][4]={{0,1,1,1},{0,0,1,1},{0,0,0,1},{0,0,0,0}};
		const MatrixOp m2("m2",a2);
		m2.print();
		
		int a3[4][4]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
		MatrixOp m3("m3",a3);
		m3.print();
		
		cout<< "Number of matrices before instantiation of any object is" << MatrixOp::getCount()<<endl;
		
		m1.subtractUpper(m2).print();
		m3.summationLower(m1).print();
		multiplyDiag(m1,m2);
		
		}
		
		cout<<endl<<"Number of Matrices after objects are deleted is"<< MatrixOp::getCount()<<endl;
		
		
	return 0;
}
