/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary.Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person
{
	private:
		string name;
		int age;
	public:
		void setperson(int a, string n)
		{
			name= n;
			age = a;
		}
		void displayperson()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
		}
	
};
class student:person
{
	private:
		float percentage;
	public:
		void setstudent(string n,int a,float p)
		{
			percentage = p;
			setperson(a,n);
		}
		void displaystudent()
		{
			cout<<"student detalis are:\n";
			displayperson();
			cout<<"percentage is:"<<percentage<<endl;
		}
};
class teacher:person
{
	private:
		float salary;
	public:
		void setteacher(string n,int a,float s)
		{
			salary = s;
			setperson(a,n);
		}
		void displayteacher()
		{
			cout<<"teachers detalis are:\n";
			displayperson();
			cout<<"salary:" <<salary<<endl;
		}
};
main()
{
	student s;
	s.setstudent("kinjal",18,90);
	s.displaystudent();
	teacher t;
	t.setteacher("vijay",55,9000);
	t.displayteacher();
}
