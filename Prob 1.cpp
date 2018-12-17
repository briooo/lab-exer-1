/*		PROGRAM CREATED BY
	Jezreel Cabrera		BSEMC-DA Y01
Problem #1: Create a program that will ask the user to enter 10 numbers and display it in ascending order.*/

#include <iostream>
using namespace std;

int main (){
	
	int num[10], temp, a, b;
	
	cout << "Please enter 10 numbers: " << endl;
	
	for (a=0; a<10; a++){
		cout << ": ";
		cin >> num[a];
	}
	
	cout << "\nEntered data: ";
	for (a=0; a<10; a++){
		cout << num[a] << " ";
	}
	
	for (a=0; a<10; a++){
		for (b=a; b<10; b++){
			if (num[a] > num[b]){
				temp = num[a];
				num[a] = num[b];
				num[b] = temp;
			}
		}
	}
	
	cout << "\n \nIn ascending order: ";
	for (a=0; a<10; a++){
		cout << num[a] << " ";
	}
	
	return 0;
}
