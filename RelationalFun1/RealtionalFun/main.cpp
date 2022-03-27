#include <iostream>

using namespace std; 

/*
	>	greater than
	>=	greater than or equal to
	<	lesser than
	<=	lesser than or equal to
	==	equal-to
	!=	not-equal-to

*/
int main()
{
	cout << boolalpha; 

	int a = 15; 
	int b = 30; 
	bool areEqual = a == b;
	cout << (a < b) << endl; 
	cout << areEqual << endl; 

	int myAge = 22; 

	cout << (myAge < b) << endl; 
	cout << (myAge > b) << endl; 

	
	return 0; 
}