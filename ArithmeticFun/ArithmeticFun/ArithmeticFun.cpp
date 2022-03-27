/*
* + addition
* - suntraction 
* * multiply
* / division
* % modulus
*/

#include <iostream>

using namespace std; 

int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b; 
	int difference = a - b; 
	int product = a * b;
	int quotient = a / b; 
	int remainder = a % b;  
	int myInt = 5; 

	int result = 10;
	result += 15;  // result = result + 15
	 
	cout << "Sum = " <<  sum <<endl; 
	cout << "Differnce =" << difference << endl; 
	cout << "Product is = " << product << endl; 
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder " << remainder << endl; 
	cout << "Result " << result << endl; 

	cout << myInt << endl;
	myInt++; //++myInt; myInt +=1; myInt=myInt + 1;
	myInt++; 
	myInt++;
	myInt++; 
	myInt--; 
	cout << myInt << endl;


	return 0; 

}