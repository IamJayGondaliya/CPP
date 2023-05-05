#include<iostream>
using namespace std;

/*
		What is static member?
			- these are the members which represents the class directly.
			- these members are common for the all class objects.
			- these member also gives the same value for all class objects.
			- there are two types of static members:
					- static data members
					- static member functions
			- these are the simply class attributes and methods which can be
			  created using 'static' keyword.
		
		Static data members:
			- attributes created using static keyword
			- this kind of variables acquires the memory space only once among 
			  all objects.
			- static data members must be assigned once in global area using scope
			  resolution operator according to following syntex.
			  		DataType  ClassName :: varName = value;
			- static data members gives the same value for all class objects.
			
		Static member functions:
			- class methods created using static keyword
			- these kind of methods can only used with static atributes.
			- normal data members(attributes) aren't supported in static member functions.
			- these methods can be accessed directly only if there are public
			- static member function can be accessed like following syntex.
					ClassName :: methodName([arguments]);
			  
*/

class Student {
	private:
		int id;				// 4
		string name;		// 8
		double per;			// 8
		//Static data member
		static string school;		// 8
		//					100	* 28 => 2800	=> 2008
		
	public:
		void setData() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;
		}
		
		//Static data member function
		static void changeSchool(string scl) {
			school = scl;
		}
		
		void getData() {
			cout << "Id\t: " << id << endl
			 	 << "Name\t: " << name << endl
			 	 << "Per\t: " << per << endl
				 << "School\t: " << school << endl;
		}
};

//Scope resolution operator	/ Membership label operator
string Student::school = "GSEB";

int main() {
	
	int n,i;
	cout << "Enter number of students: ";
	cin  >> n;
	
	//Array of object
	Student s[n];	
	for(i=0; i<n; i++)
	{
		s[i].setData();
	}
	
	Student::changeSchool("CBSE");
	
	for(i=0; i<n; i++)
	{
		s[i].getData();
	}
	
}















