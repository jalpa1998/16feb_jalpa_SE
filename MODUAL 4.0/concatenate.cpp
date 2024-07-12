/*Write a program to concatenate the two strings using Operator Overloading*/
#include <iostream>
using namespace std;
class string
{
	char *s;
	int l;
	public:
void getdata()
{
	char str[20];
	cout<<"enter a string:";
	cin>>str;
	l=strlen(str);
	s=new chat[2+2];
	strcpy(s,str);
}
void dispaly()
{
	cout<<s<<endl;
	
}
string operator+(string x)
{
	string temp;
	temp.s=new char[l+x.l+s];
	strcpy(temp.s,s);
	strcpy(temp.s,x,s);
	return temp;
}
};
main()
{
	string s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	cout<<"s3=";
	s3.dispaly();
}

