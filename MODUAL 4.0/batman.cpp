/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data*/ 
#include<iostream>
using namespace std;
class Batsman 
{
private:
	int bcode,innings,notout,runs,batavg;
	char bname[20];
void calcavg()    
{
	if(innings!=notout)
	batavg = runs/(innings-notout);
	else
	batavg=0;
}
public :
void readdata();
void displaydata();
};
void Batsman::readdata () 
{
	cout<<"Enter Batsman code: ";
	cin>> bcode;
	cout<<"Enter Batsman name:";
	cin.ignore();
	cin.getline(bname, 20);
	cout<<"Enter batman innings:";
	cin >> innings;
	cout<<"Enter notout: ";
	cin >> notout;
	cout<<"Enter runs: ";
	cin >> runs;
calcavg();
	cout<<"=================================";
}
void Batsman::displaydata() 
{
	cout<<"Batsman code "<<bcode
	<<"\nBatsman name "<<bname
	<<"\nInnings "<<innings
	<<"\nNot out "<<notout
	<<"\nRuns "<<runs
	<<"\nBatting Average "<<batavg;
}
main()
{
	Batsman myBatsman;
	myBatsman.readdata();
	myBatsman.displaydata();
}
