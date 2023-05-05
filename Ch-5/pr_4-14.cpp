#include<iostream>
using namespace std;

class Stud{
	private:
		int id;
		string name;
		
	public:		
		void setData() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
		}
		
		static void getHeader() {
			cout << "Id\tName\n------- -------\n";
		}
		
		void getData() {
			cout << id << "\t" << name << endl;
		}
		
		
		friend void getRecords(Stud[],int);
};

void getRecords(Stud s[],int n) {
	
	Stud temp;
	
	//Arrange in ascending order
	for(int i=0; i<n; i++) {		
		for(int j=i+1; j<n; j++) {
			if(s[i].id > s[j].id) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}		
	}
	
	for(int i=0; i<n; i++) {
		s[i].getData();
	}
	
}

int main() {
	
	int n;
	
	cout << "Enter length: ";
	cin  >> n;
	
	Stud s[n];
	
	for(int i=0; i<n; i++) {
		s[i].setData();
	}
	
	getRecords(s,n);
	
}
