#include "MatrixOp.h"

int MatrixOp::count=0;

///constructor		
MatrixOp::MatrixOp(string n,int a[][4])
:ID(n)
{
	cout<<"Matrix object constructor:"<<ID<<endl;
	
	for(int i=0;i<getRow();i++)
	{
		for(int j=0;j<getRow();j++)
		{
			D[i][j]=a[i][j];
			
		}
	}
}

///destructor
MatrixOp::~MatrixOp()
{
	cout<<"Matrix object destructor:"<<ID;
}


int MatrixOp::getRow(void)
{
	return row;
}
int MatrixOp::getColumn(void)
{
	return column;
}
int MatrixOp::getCount(void)
{
	return count;
}
		



string MatrixOp::getID(void) const
{
		
	return ID;	
				
}

void MatrixOp::setUpper( int a[][4])
{
	for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < (4 - i); j++)
       {
           aupper=array[i][j];
           cout<<aupper;
       }
    }
}
void MatrixOp::setLower(int a[][4])
{
	for (int j = 0; j < 4; j++)
    {
       for (int i = 0; i < (4 - j); i++)
       {
           alower=array[i][j];
           cout<<alower;
       }
    }
}
void MatrixOp::setDiag( int a[][4])
{
	
	
}

		
void MatrixOp::printRow(const int a )
{
	
	
	cout<<"row:"<<a<<endl;
	
}
void MatrixOp::print(void) const
{
	cout<<getID()<<"=\n"<<endl;
	for(int i=0;i<getRow();i++)
	{
		for(int j=0;j<getColumn();j++)
		{
			cout<<D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
}
MatrixOp MatrixOp::subtractUpper (const MatrixOp &m2)
{
	int a[4][4]={};
	MatrixOp m1("m1",a);
	int column=4;
	int row=4;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			m1.D[i][j]=this->D[i][j]-m2.D[i][j];
			
		}
		
	}
	return m1;
	
	
}
