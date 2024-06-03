// Bank Management System
#include <iostream>
using namespace std;
class Bank 
{
	int acc_no;
	char acc_type,name[30];
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};
void Bank::open_account()
{
	cout << "Enter your account number:";
	cin>>acc_no;
	cout<<"enter your full name:";
	cin>>name;
	cout<<"Enter your account type:";
	cin>>acc_type;
	balance =2000;
	cout << "Account Created Successfully";
}
void Bank::deposit_money()
{
	int Amount;
	Amount =2000;
	cout << "Enter how much money"
		<< " you want to deposit: "
		<< Amount;
	balance += Amount;
	cout << "\n Available Balance: "
		<< balance;
}
void Bank::display_account()
{
	cout<<"account no:"<<acc_no;
	cout <<"\nName: " << name;
	cout<< "\nType: " << acc_type ;
	cout<< "\nBalance: " << balance;
}
void Bank::withdraw_money()
{
	float amount;
	amount = 2000;
	cout << "Enter how much money you withdrew: "
		<< amount;
	balance -= amount;
	cout << "\n Available balance: "
		<< balance;
}
int main()
{
	int choice;
	Bank customer;
	cout << "\n1) Open account \n\n";
	customer.open_account();
	cout << "\n------------------------"
		<< "-------------------------\n";
	cout << "\n2) Deposit account \n\n";
	customer.deposit_money();
	cout << "\n------------------------"
		<< "-------------------------\n";
	cout << "\n2) Withdraw money \n\n";
	customer.withdraw_money();
	cout << "\n------------------------"
		<< "-------------------------\n";
	cout << "\n4) Display Account \n\n";
	customer.display_account();
	cout << "\n------------------------"
		<< "-------------------------\n";
}

