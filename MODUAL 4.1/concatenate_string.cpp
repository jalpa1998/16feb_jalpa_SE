/*write a program to use of onstructors in multileval inheritance*/
#include<iostream>
using namespace std;
class A
{
	public:
		a()
		{
			cout<<"base class A constructor \n";
		}
};
class B:public A
{
	public:
		b()
		{
			cout<<"class B constructor \n";
		}
};
class C:public B
{
	public:
		c()
		{
			cout<<"class c constructor \n";
		}
};
main()
{
	C obj;
}
