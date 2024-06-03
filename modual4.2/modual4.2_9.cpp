/* Write a program to find the max number from given two numbers using friends function*/
#include<iostream>
using namespace std;
class Max
{
	int a,b;
	public:
	void setdata()
	{
		cout<<"enter two number:";
		cin>>a>>b;
	}
	void getdata()
	{
		if(a>b)
		cout<<"maximum"<<a;
		else
		cout<<"maximum"<<b;
	}
};
 main()
{
	Max st;
	st.setdata();
	st.getdata();
}

