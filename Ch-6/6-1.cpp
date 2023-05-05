#include<iostream>
using namespace std;

/*
		6.  : (to share)
			
			- to share data between one class to another class.
*/

//parent/super/base class
class ZONE {
	protected:
		int id;
		string name;
};

//child/sub/derrived class
class CSC : public ZONE {
	public:
		void setDetails() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
		}
		
		void getDetails() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl;
		}
};

int main() {
	
	CSC c1;
	
	c1.setDetails();
	c1.getDetails();	
}






