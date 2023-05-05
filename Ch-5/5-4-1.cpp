#include<iostream>
using namespace std;

/*
			Constructor:
			
				- Types of constructor decides the type of object
			
				- default
				- parameterized
				- copy
					- implicit 		(directly)
					- explicit		(forcefully)
					
			Destructor:
				- a block of code which is automatically invoked when object is destroyed(deleted from RAM when function or 
				  program ends) is called destructor
				- as similar as constructor, we can't prevent the execution of destructor
				  
				- rules:
					- it's name must be same as class name with tild '~' as prefix.
					- it cannot have any data type.
					- it can't return any value.
					- it can't take any value in parameters.
					
*/

class Demo{
	private:
		int id;
		string name;
		int a,b;
	public:
		
		//Default
		Demo() {
			cout << "Object created !!" << endl;
			setData();
		}
		
		//Parameterized
		Demo(int id,string name,int a,int b) {
			this->id = id;
			this->name = name;
			this->a = a;
			this->b = b;
		}
		
		Demo(int a) {
			cout << "Only int: " << a << endl;
		}
		
		Demo(Demo &d) {
			this->id = d.id;
			this->name = d.name;
		}
		
		//Destructor
		~Demo() {
			getData();
			cout << "THE END !!" << endl;
		}
		
		void setData() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
		}
		
		void getData() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "A\t: " << a << endl
				 << "B\t: " << b << endl;
		}
};

int main() {
	
	Demo d(101,"Aman",11,22);
	
}





