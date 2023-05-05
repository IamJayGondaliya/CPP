#include<iostream>
using namespace std;

/*
		Polymorphism:
			- compile time
				- constructor overloading
				- method overloading
				- operator overloading
				
	
		Method overloading:
			- it's a concept to access same named method with multiple possibilites
			
			Rules:
				- all the methods must have same name
				- all the methods must be in same class
				- all the methods must have different parameters
				
		Method overriding :			
			Rules:
				- all the methods must have same name and return type
				- second method must be in derived(child) class
				- all the methods must have same parameters
				
				Method overloading			Method overriding
	-----------------------------------------------------------
	name			same						same
	return type		same/differrent				same
	parameters		different					same
	class			same						derived(child)
	type			compile time				run time
	
*/

class Math {	
	public:
				
		void sum(int a,int b) 
		{
			cout << "Sum: " << a+b << endl;
		}
		
		void sum(int a,int b,int c)
		{
			cout << "Sum: " << a+b+c << endl;
		}
		
		//Defaulted parameters
		void sum(int a,int b, int c = 0, int d = 0, int e = 0) {
			cout << "Sum: " << a+b+c+d+e << endl;
		}
		
		void sum(int a[],int n)
		{
			int sum = 0;			
			for(int i=0; i<n; i++) {
				sum = sum + a[i];
			}			
			cout << "Sum: " << sum << endl;
		}		
};

class Math2 : public Math {
	
	public:
		void sum(int a,int b) {
			cout << "Sum of " << a << " and " << b << " = " << a+b << endl;
		}
	
};

int main() {
	
	Math2 m;
	
	m.sum(11, 22);
	
}

