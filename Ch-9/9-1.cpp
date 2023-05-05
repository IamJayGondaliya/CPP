#include<iostream>
using namespace std;

/*
		Error:
			- compile time unhandled code which prevents the code to be executed..
			- syntax mistake.
			- can be only occured by developer.
	
		Exception:
			- run time unhandled code which interrupts/breaks/stops flow of execution.
			- run time error.
			- logical mistake.
			- can be occured by developer and user.
			
		Exception handling blocks:
			- try
			- catch
			
			try {
				- a statement which may cause an exception.
				- throw	>>	return VALUE;
			}
			catch(DataType var) {
				- solution of exception
			}
			catch(...) {
				- general catch block
			}
			
			...	=> Spread operator
			
*/

void division(int a,int b) {
	
	string msg = "Cannot devide by ZERO !!";
	
	try {
		if(b==0) {
			throw msg;
		}
		else {			
			cout << "Answer: " << (double)a/(double)b << endl;
		}
	}
	catch(int n) {
		cout << "Cannot devide by " << n << endl;
	}
	catch(string s) {
		cout << s << endl;
	}
	catch(...) {
		cout << "Unhandled exception !!" << endl;
	}
}

int main() {
	
	int a,b;
	
	cout << "Enter a: ";
	cin  >> a;
	cout << "Enter b: ";
	cin  >> b;
	
	division(a,b);
	
	cout << "THE END !!" << endl;
	
}
