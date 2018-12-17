/*		PROGRAM CREATED BY
	Jezreel Cabrera		BSEMC-DA Y01
Problem #4: Create a program that will check if a given word is a palindrome or not a palindrome.*/

#include <iostream>
using namespace std;

int main (){

	string a, word[5] = {"racecar", "nasabayabasan", "kayak", "level", "noon"};
	int i;
	
	cout << "Please enter a word: ";
	cin >> a;
	cout << endl;
	
	for (i=0; i<5; i++){
		if (a == word[i]){
			cout << "the word is a palindrome!";
		}
		else if (!(a == word[i])){
			cout << "the word is not a palindrome!";
			system("CLS");
		}
	}

	return 0;
}
