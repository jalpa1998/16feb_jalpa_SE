/*Write a program to find the multiplication values and the cubic values using 
inline function*/
#include<iostream>
using namespace std;
class line
{
public:
inline float mul( float a, float b)
{
    return(a*b);
}

inline float cube(float a)
{
    return(a*a*a) ;
}
};
main()
{
	line obj;
	float val1,val2;
	cout<<"enter two values:";
	cin>>val1,val2;
    cout<<"\nmultiplication value is:"<<obj.mul(val1,val2);
    cout<<"\n\ncube value is:"<<obj.cube(val1)<<"\t"<<obj.cube(val2);
}
