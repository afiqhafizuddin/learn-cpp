#include <iostream>
using namespace std; 
/*
	>	greater than 
	>=	greater than or equal to
	<	lesser than
	<=	lesser than or equal to
	==	equal-to (equality)
	!=	not-equal-to (equality)
	
	*/
int main()
{
	cout << boolalpha;
	int a = 15;
	int b = 20;
	cout << (a < b) << endl; // parentheses for the boolean argument
	bool areEqual = a == b; 

	cout << areEqual << endl; 


	int myAge = 22;
	cout << "Age >= 20?" <<  (myAge >= 20) << endl; 
	 
	return 0;
}