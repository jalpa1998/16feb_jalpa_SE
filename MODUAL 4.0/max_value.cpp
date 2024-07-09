/* Write a program to find the max number from given two numbers using friends function*/
#include<iostream>
using namespace std;
class test
{
public:
	int a,b;
public:
void input()
{
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
}
	friend void find(test t);
};
void find(test t)
{
	if(t.a >t.b)
	{
		cout<<"largest is:"<<t.a;
	}
	else
	{
		cout<<"largest is:"<<t.b;
	}
}
int main()
{
	test t;
	t.input();
	find(t);
}

