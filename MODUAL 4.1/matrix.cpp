/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;
class matrix
{
	int j=0,i=0,r=0,c=0,e[20][20];
public:
	matrix getmatrix()
	{
		cout<<"enter the number of rows of matrix:"<<endl;
		cin>>r;
		cout<<"enter the number of columns of matrix:"<<endl;
		cin>>c;
		cout<<"enter the element of the matrix:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>e[i][j];
		}
	}
}
matrix operator+(matrix m)
{
	matrix summatrix;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			summatrix.e[i][j]=this->e[i][j]+m.e[i][j];
		}
	}
	return summatrix;
}
void displaymatrix()
{
	for(i=0;i<r;i++)
	{
		cout<<endl;
		for(j=0; j<c; j++)
		{
			cout<<this->e[i][j]<<" ";
		}
	}
}
};
main()
{
	cout<<"in order to add matrices thay have same dimension"<<endl;
	matrix m1,m2,m3;
	cout<<"firat matrix:"<<endl;
	m1.getmatrix();
	m1.displaymatrix();cout<<endl;
	cout<<"second matrix:"<<endl;
	m2.getmatrix();
	m2.displaymatrix();cout<<endl;
	m3=m1+m2;
	cout<<"the sum of two matrices is:"<<endl;
	m3.displaymatrix();
}
