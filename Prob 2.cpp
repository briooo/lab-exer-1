/*		PROGRAM CREATED BY
	Jezreel Cabrera		BSEMC-DA Y01
Problem #2: Create a program that will convert a decimal number (positive value) to its equivalent binary number.*/

#include <iostream>
using namespace std;

int main (){

	int a[10], num, i;
	
	cout << "Enter the number to convert: ";    
	cin >> num;
	   
	for (i=0; num>0; i++){    
		a[i] = num%2; 
		num = num/2;  
	}   
	 
	cout<<"\nBinary of the given number = ";    
	for (i=i-1 ;i>=0 ; i--){    
		cout << a[i];    
	}    

	return 0;
}
