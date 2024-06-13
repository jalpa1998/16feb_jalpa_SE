/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;
main()
{
	int matA[2][2],matB[2][2],matC[2][2];
	int i,j;
	
	cout<<"enter your value for 1st matrix:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>matA[i][j];
		}
	}
	cout<<"enter your value for 2st matrix:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>matB[i][j];
		}
	}
	for(i=0;i<2;i++)
	{		{
			matC[i][j]=matA[i][j]+matB[i][j];
		}
	}
	cout<<"sum of the given number is:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<matC[i][j]<<" ";
		}
		cout<<endl;
	}
}
