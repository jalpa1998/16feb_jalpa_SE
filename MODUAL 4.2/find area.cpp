/* Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading */
#include<iostream>
using namespace std;
	int area(int);
	int area(int,int);
	float area(float);
	float area(float,float);
main()
{
	int l,b;
	float r,bs,ht;
	cout<<"Enter length of rectangle:";
	cin>>l;
	cout<<"Enter breadth of rectangle:";
	cin>>b;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Enter base of triangle:";
	cin>>bs;
	cout<<"Enter height of triangle:";
	cin>>ht;
	cout<<"\nArea of rectangle is "<<area(l,b);
	cout<<"\nArea of circle is "<<area(r);
	cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int l,int b)
{
	return(l*b);
}
	float area(float r)
{
	return(3.14*r*r);
}
float area(float bs,float ht)
{
	return((bs*ht)/2);
}
