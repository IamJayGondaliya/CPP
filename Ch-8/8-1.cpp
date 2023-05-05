#include<iostream>
using namespace std;

/*
		Data Abstraction	(restriction)
			- data hiding
			- display only essential logic to the user and hide confidential
			  data.
			- it can be done using access modifiers and abstract class.
			
			- Access modifiers:
				- private	(default)
					- accessible only in class and friend function.
				- public	
					- accessible every where using object or using scope of class if it's static.
				- protected
					- accessible in parent class and child class.
*/		

class Admin {
	private:
		int revenue;
	protected:
		static int sal;
	public:
		void setRev() {
			cout << "Enter revenue: ";
			cin  >> revenue;
		}
		
		void setManSal() {
			cout << "Enter manager salary: ";
			cin  >> sal;
		}
		
		void getRev() {
			cout << "Total revenue: " << revenue << endl;
		}
};

int Admin::sal = 0;

class Manager : private Admin {
	protected:
		static int salary;
	public:		
		void setSal() {
			cout << "Enter salary: ";
			cin  >> salary;
		}
		
		void getManSal() {
			cout << "Manager salary: " << sal << endl;
		}
};

int Manager::salary = 0;

class Employee : private Manager {
	public:
		void getSalary() {
			cout << "Salary: " << salary;
		}
};

int main() {
	
	Admin a1;
	Manager m1;
	Employee e1;
	
	a1.setRev();
	a1.getRev();
	a1.setManSal();
	
	m1.setSal();
	m1.getManSal();
	
	e1.getSalary();
	
}







