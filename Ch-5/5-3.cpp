#include<iostream>
using namespace std;

/*
		Friend function:
			- A method which can access the private attributes or methods from class.
			- It can be created using 'friend' keyword.	
			- Friend function must be declared only in class.
			- The body section of friend fuction will be in global area.
			- Friend function doesn't require any object of class name to be executes.
			- Friend function can be directly used by it's name (calling).
*/

class Nayan {
	private:
		int salary = 25000;
	public:
		void getData() {
			cout << "Salary is: " << salary * 2 << endl;
		}
		
		friend void Tirth();
};

class Aman {
	private:
		int salary = 20000;
	public:
		void getData() {
			cout << "Salary is: " << salary * 2 << endl;
		}
		
		friend void Tirth();
};

void Tirth() {
	Nayan n;
	Aman a;
	
	cout << "Salary of Nayan: " << n.salary << endl;
	cout << "Salary of Aman: " << a.salary << endl << endl;
	
	cout << "Total salary: " << n.salary + a.salary;
}

int main() {

	Tirth();	
	
}
