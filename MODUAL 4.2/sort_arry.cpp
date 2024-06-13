#include<iostream>
#include<algorithm>    
using namespace std;  
const int array_size = 10;  
int main() 
{  
  	int arr[array_size] = {3, 7, 1, 5, 2, 8, 4, 6, 9, 0};    
  	cout << "Original array: ";  
  	for (int i = 0; i <array_size; i++) 
	{  
    	cout << arr[i] << " ";  
  	}  
  		cout<<endl;    
  	sort(arr, arr +array_size, greater<int>());   
  	cout << "Sorted array: ";  
  	for (int i = 0; i <array_size; i++) 
	{  
    	cout << arr[i] << " ";  
  	}  
  	cout<< endl; 
}  
