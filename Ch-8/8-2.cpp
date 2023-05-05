#include<iostream>
#include<stdio.h>
using namespace std;

/*
		Virtual function:
			- represents the single existence of any method or class.
			- removes ambiguity permenantly from the hybrid inheritence.
			
		Abstract class:
			- Class which cannot be instanciated.
			- we cannot create object of abstract class.
			- it can be created using pure virtual function.
				- Pure Virtual Function:
					- a function with initial value '0' and virtual return type.
			- to use the abstract class, we must have to re-incarnate the pure virtual function 
			  in derived class.
			- if we don't re-incarnate the pure virtual function in child class, the child
			  class also will be abstract class.
			- to use inner attributes or methods, re-incarnate (override) the pure virtual function
			  in child class with same function signatures(return type, name, arguments) without
			  using 'virtual' keyword again.
*/

class Google {
	private:
		string email;
		string psw;
	public:
		Google() {
			email = "admin@gmail.com";
			psw = "Admin@123";
		}
		
		//Pure Virtual Function
		virtual void key(int id) = 0;
		
		bool signIn(string email,string psw) {
			if(this->email == email && this->psw==psw) {
				cout << "Login successfully !!" << endl;
				return true;
			}
			else {
				cout << "ERROR: Login failled !!" << endl;
				return false;
			}
		}
};

class Emp : public Google {
	private:
		string email,psw;
		bool isLoggedIn;
		int eid;
		string ename;
	public:
		
		//Override
		void key(int a) {
			cout << "We accessed Google !!" << endl;
		}
		
		void setData() {
			cout << "Enter email\t: ";
			cin  >> email;
			cout << "Enter psw\t: ";
			cin  >> psw;`````````
			
			isLoggedIn = signIn(email,psw);
			
			if(isLoggedIn) {
				cout << "Enter id\t: ";
				cin  >> eid;
				cout << "Enter name\t: ";
				cin  >> ename;
			}
		}
		
		void getData() {
			if(isLoggedIn) {
				cout << "Id\t: " << eid << endl
					 << "Name\t: " << ename << endl
					 << "Email\t: " << email << endl;
			}
			else {
				cout << "YOU DID'T LOGIN YET !!" << endl;
			}
		}
		
};

int main() {
	
	Emp e1;
	
	e1.signIn("email","psw");
	e1.setData();
	e1.getData();
	
}












