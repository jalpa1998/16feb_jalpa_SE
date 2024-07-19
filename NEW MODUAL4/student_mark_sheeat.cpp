/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
main()
{
	int g,h,s,e,total;
	float per;
	double avg;
	cout<<"enter the student mark of gujrati:";
	cin>>g;
	cout<<"enter the student mark of hindi:";
	cin>>h;
	cout<<"enter the student mark of scince:";
	cin>>s;
	cout<<"enter the student mark of english:";
	cin>>e;
	total=g+h+s+e;
	cout<<"\ntotal marks "<<total;
	avg=total/4;
	per=(total*100)/400;
}
