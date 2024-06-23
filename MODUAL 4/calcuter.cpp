/*WAP to create simple calculator using class*/
#include<iostream>
#include<math.h>
using namespace std;
class calculator
{
	float a,b;
	public:
		void result()
		{
			cout<<"enter first number:";
			cin>>a;
			cout<<"enter second number:";
			cin>>b;
		}
		float add()
		{
			return a+b;
		}
		float sub()
		{
			return a-b;
		}
		float mul()
		{
			return a*b;
		}
		float div()
		{
			if(b==0)
			{
				cout<<"devision by zero";
				return INFINITY;
			}
			else
			{
				return a/b;
			}
		}
};
int main()
{
	int ch;
	calculator c;
	cout<<"enter 1 to addition"<<
		"\n enter 2 to subtract "<<
		"\n enter 3 to multiply "<<
		"\n enter 4 to divide"<<
		"\n enter 0 to exit";
	do
	{
		cout<<"\nenter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				c.result();
				cout<<"result:"<<c.add();
			break;
			case 2:
				c.result();
				cout<<"result:"<<c.sub();
			break;
			case 3:
				c.result();
				cout<<"result:"<<c.mul();
			break;
			case 4:
				c.result();
				cout<<"result:"<<c.div();
			break;
		}
	}
	while(ch>>= 1 && ch <= 4);
}
	
		

