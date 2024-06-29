/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructo */  
#include<iostream>
using namespace std;
main()
{
    int first, second, addition, subtract, multiply;
    float divide;
    
    cout<<"enter first number: ";
    cin >> first;
    cout<<"enter second number:";
    cin >> second;
    
    addition = first + second;
    subtract = first - second;
    multiply = first * second;
    divide   = first / (float)second; 
    
    cout<<endl<<"Sum = "<<addition;
    cout<<endl<<"Difference = "<<subtract;
    cout<<endl<<"Multiplication = "<<multiply;
    cout<<endl<<"Division = "<<divide; 
}
