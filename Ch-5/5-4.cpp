#include<iostream>
using namespace std;

/*
			What is constructor?
				- it is a block of code which is automatically invoked when class is instanciated.
				- instanciate: to create object
				- we can't prevent constructor to be invoked.
				- types of constructors we create, decides the types of object of class.
				- rules to create constructor: 
						- it's name must be same as class name
						- it cannot have any return type: void, int, double, etc...
						- it cannot return any data.
				- types of constructor
						- defauylt constructor
						- parameterized constructor
						- copy constructor
*/

class Hotel {
	private:
		string name;
		double rating;
		string dish;
		double bill;
	public:
		
		//default constructor
		Hotel() {			
			cout << "Welcome to the hotel AT&T !!" << endl;
			placeOrder();
			getBill();
		}
		
		//method
		void getGreetings() {
			cout << "Welcome to the hotel AT&T !!" << endl;
		}
		
		void placeOrder() {
			cout << "Enter dish name: ";
			cin  >> dish;
			cout << "Enter bill: ";
			cin  >> bill;
		}
		
		void getBill() {
			cout << "================" << endl;
			cout << "Dish\t: " << dish << endl;
			cout << "Bill\t: " << bill << endl;
			cout << "================" << endl;
		}
};

int main() {
	Hotel h;	
}





