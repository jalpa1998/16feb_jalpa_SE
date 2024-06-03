#include <iostream>
using namespace std;
class Student
{
    protected:
    char name[20];
    int roll_number, age;
    public:
    Student(){}
void getDetails()
{
    cout<<"enter your roll number: ";
    cin>>roll_number;
    cout<<"enter your name: ";
    cin.get();
    cin.getline(name, 20);
    cout<<"enter your age: ";
    cin>>age;
}
void putDetails()
{
    cout<<"Roll Number: "<<roll_number;
    cout<<"Name: "<<name;
    cout<<"Age: "<<age;
}
};
class Test: public Student
{
    protected:int s1, s2;
    public:
    Test(): Student(){}
void getmarks()
{
    cout<<"enter subject marks: \n";
    cout<<"Subject 1: ";
    cin>>s1;
    cout<<"Subject 2: ";
    cin>>s2;
}
void putmarks()
{
    cout<<"Subject 1: "<<s1;
    cout<<"Subject 2: "<<s2;
}
};
class Sports: public Student
{
    protected:int indoor, outdoor;
    public:
    Sports(): Student(){}
void getscore()
{
    cout<<"Input sports scores: \n";
    cout<<"Indoor: ";
    cin>>indoor;
	cout<<"Outdoor: ";
    cin>>outdoor;
}
void putscore()
{
    cout<<"Indoor: "<<indoor;
    cout<<"Outdoor: "<<outdoor;
}
};
class Result: public Sports, public Test
{
    int total;
    public:
    Result(): Sports(), Test()
{
    Test::getDetails();
	getmarks();
	getscore();
    total = indoor + outdoor + s1 + s2;
}
void display()
{
	cout<<endl;
    Test::putDetails();
    cout<<"Test Marks: \n"; Test::putmarks();
    cout<<"Sports Scores: \n"; Sports::putscore();
    cout<<"Total: "<<total<<endl;
    cout<<"Percentage: "<<total / 2 <<" % ";
}
};
int main()
{
	Result result;
    result.display();
}

