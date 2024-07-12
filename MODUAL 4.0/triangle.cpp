/*Write a program to calculate the area of triangle using Function*/
#include<iostream>
using namespace std;
main()
{
	int side1,side2,side3;
	cout<<"enter tringle side:";
	cin>>side1>>side2>>side3;
	if(side1==side2==side3)
	{
		cout<<"tringle:";
	}
	else if(side1==side2||side2==side3)
	{
		cout<<"is called tringle:";
	}
	else
	{
		cout<<"scale triangle";
	}
}    
