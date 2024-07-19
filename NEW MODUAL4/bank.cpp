/*bank manegmnet systam*/
#include<iostream>
using namespace std;
class bankAccount
{
	string acno;
	float balance;
	public:bankAccount()
	{
		balance=1000;
	}
void deposit() 
{
	float a;
	cout<<"enter the amount:";
	cin>>a;
	balance+=a;
	cout<<"deposite successfuly";
}
void withdraw()
{
	float a;
	cout<<"enter the amount:";
	cin>>a;
	if(a>balance)
	{
		balance-=a;
		cout<<"successfully withdraw:";
	}
	else
	{
		cout<<"your balance is low:";
	}
}
};
main()
{
	int ch;
	do
	{
		cout<<"\n1.chack balance:";
		cout<<"\n2.deposite amount:";
		cout<<"\n3.withdraw amount:";
		cout<<"\nenter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			a.show(); 
			break;
			case 2:
			a.deposite(); 
			break;
			case 3:
			a.withdraw(); 
			break;
			
			default:
				cout<<"\nplease enter right answer:";
			while(ch!<=4)
		}
	}
}
	
			
	

