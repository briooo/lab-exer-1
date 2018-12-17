/*		PROGRAM CREATED BY
	Jezreel Cabrera		BSEMC-DA Y01
			Problem #3*/

#include <iostream>
using namespace std;

int main (){

	int num[10] = {};
	int low1, low2, high1, high2;
	
	cout << "Please enter 10 different numbers." << endl;
	
	for (int n = 0; n < 10; n++){
		cout << ": ";
		cin >> num[n];
	}
	
	high1 = high2 = INT_MIN;
	for (int i = 0; i < 10; i++){
		if (num[i] > high1){
			high2 = high1;
			high1 = num[i];
		}
		else if (num[i] > high2){
			high1 = num[i];
		}
	}
	
	cout << "first to the highest: " << high1 << endl;
	cout << "second to the highest: " << high2 << endl;
	
	low1 = low2 = INT_MAX;
	for (int i = 0; i < 10; i++){
		if (num[i] < low1){
			low1 = low2;
			low2 = num[i];
		}
		else if (num[i] < low2){
			low1 = num[i];
		}
	}
	
	cout << "first to the lowest: " << low1 << endl;
	cout << "second to the lowest: " << low2 << endl;

	return 0;
}
