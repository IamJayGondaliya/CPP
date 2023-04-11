#include<iostream>
using namespace std;

class Student {
	private:			//default: private
		//attributes		=> variables
		int id;
		string name;
	public:
		//methods			=> udf
		void setData() {	
			cout << "Enter id: ";
			cin  >> id;
			cout << "Enter name: ";
			cin  >> name;			
		}
		
		void getData() {
			cout << "Id\t: " << id << endl
				 << "name\t: " << name << endl;
		}
};

int main() 
{
	//Object
	Student s1,s2;

	s1.setData();
	s2.setData();
	s1.getData();
	s2.getData();
}
