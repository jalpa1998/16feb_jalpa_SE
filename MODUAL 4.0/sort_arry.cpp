/* Write a program of to sort the array using templates*/
/* using templates*/
#include<iostream>
using namespace std;

template<typename T> T mymax(T x,T y)
{
	return(x>y)?x:y;
}
int main()
{
	cout<<mymax<int>(3,7)<<endl;
	cout<<mymax<double>(3.0,7.0)<<endl;
	cout<<mymax<char>('a','b')<<endl;
}
