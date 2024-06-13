/*Write a program to swap the two numbers using friend function without 
using third variable*/
#include<iostream>
using namespace std;
main()
{
	int a,b,temp;
	cout<<"enter the value of a \n";
	cin>>a;
	cout<<"enter the value of b\n";
	cin>>b;
	cout<<"before swapping\n a="<<a<<"\n b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping\n a="<<a<<"\n b="<<b<<endl;
}
