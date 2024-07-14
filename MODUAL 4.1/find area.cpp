/* Write a program to find area of rectangle using innheritance */
#include<iostream>
using namespace std;
class A
{
	int l,b,area;
	public:
		void reactangle()
		{
			cout<<"enter the lenth and breant of rectangle:";
			cin>>l>>b;
			area=l*b;
			cout<<"area of reactangle:"<<area;
		}
};
main()
{
	A obj;
	obj.reactangle();
}
