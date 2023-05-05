#include<iostream>
using namespace std;

/*
		this keyword:
			- when class attributes and function parameters both have same name,
			  then we can make difference and identify the class attributes
			  using this keyword.
			- USE:
				this->varName
				
*/

class Student 
{
	private:		
		int id;
		string name;
		double per;
	public:		
		//setter:	a function to take input of attributes
		void setData(int id,string name,double per)
		{
			this->id = id;
			this->name = name;
			this->per = per;
			
			//Nested member function
			getData();
		}
		
		//getter: 	a function to give output of attributes
		void getData() 
		{
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Per\t: " << per << endl;
		}
};

int main()
{
	Student s1;
	
	s1.setData(101,"Nayan",75.46);
}

