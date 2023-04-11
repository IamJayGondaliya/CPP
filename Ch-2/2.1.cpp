#include<iostream>
using namespace std;

//Funtion prototyping (pre-declaration)
void input(int&);
//int arraySum(int[],int);
//void arrayInput(int[],int);
//void arrayDisplay(int[],int);

/*
			Inline function :
				- It increases the processing speed of code.
				- it cannot be used in functions which contains...
							- user input
							- loops, switch case
							- recursions
							- goto statement
*/

inline void square(int n) {
	cout << "Square of " << n << " = " << n*n << endl;
}

int main() 
{
	int a = 5;
	square(a);
}


void input(int &n) {
	cout << "Enter value: ";
	cin  >> n;
}

/*
		Expression & Function :
		
			- Function :
				- re-usable block of code.
				- RetuenType  functName( [arguments] ){ [return value;] }
				
			- Expression :
				- single line statement
				
				Special Assignment Expressions :
					- Chainned assign expression
					- Embadded Expression
					- Compound assign Expression
						- assignment operators :
							+=, -=, *=, /=, %=
							
		Reference variable :
*/

//void arraySquare
//void stringTitleCase
//void stringToggleCase


int arraySum(int a[],int n) {
	int sum = 0;
	
	for(int i=0; i<n; i++) {
		sum += a[i];
	}
	
	return sum;
}

//call by reference
void arrayInput(int a[],int n) {
	for(int i=0; i<n; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin  >> a[i];
	}
}

void arrayDisplay(int a[],int n) {
	for(int i=0; i<n; i++)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
}

/*
		Reference variable :
				- variable which contains addressm of another variable
				- can be created with address of operator '&'
				- it must be initialized.
				- can be called upgraded version of pointer.
				
			Top to Bottom
			Bottom to Top
				
		Function Prototyping:
*/


















