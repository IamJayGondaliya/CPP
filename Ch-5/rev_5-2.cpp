#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
		double per;
		int fees;
		static int idCount;
		static int totalFees;
		static string school;
	public:
		void setData() {
			id = idCount;
			idCount++;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;
			cout << "Enter fees\t: ";
			cin  >> fees;
			
			totalFees += fees;
		}
		
		static void getTotalFees() {
			cout << "=========================" << endl
				 << "Total fees\t: " << totalFees << endl
				 << "=========================" << endl;
		}
		
		static void changeSchool() {
			cout << endl << "Enter new school name: ";
			cin  >> school;
			cout << endl;
		}
		
		static void header() {
			cout << endl;
			cout << "Id\tName\tPer\tFees\tSchool" << endl;
			cout << "------- ------- ------- ------- -------" << endl;
		}
		
		void getDataInTable() {
			cout << id << "\t" << name << "\t" << per << "\t" << fees << "\t" << school << endl;
		}
};

string Student::school = "GSEB";
int Student::totalFees = 0;
int Student::idCount = 101;


int main() {
	
	int n,i;
	
	cout << "Enter number of Students: ";
	cin  >> n;
	
	Student s[n];
	
	for(i=0; i<n; i++) {
		s[i].setData();
	}
	
	Student::header();
	
	for(i=0; i<n; i++) {
		s[i].getDataInTable();
	}
	
	Student::getTotalFees();
	
	Student::changeSchool();
	
	Student::header();
	for(i=0; i<n; i++) {
		s[i].getDataInTable();
	}
	
}












