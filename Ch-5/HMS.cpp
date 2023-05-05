#include<iostream>
using namespace std;

class T1 {
	private:
		int h,m,s;
	public:
		void setData() {			
			cout << "Enter H: ";
			cin  >> h;
			cout << "Enter M: ";
			cin  >> m;
			cout << "Enter S: ";
			cin  >> s;
		}
		
		void getData() {
			cout << "Time1: " << h << ":" << m << ":" << s  << endl;
		}
		
		friend void calculate();
};

class T2 {
	private:
		int h,m,s;
	public:
		void setData() {			
			cout << "Enter H: ";
			cin  >> h;
			cout << "Enter M: ";
			cin  >> m;
			cout << "Enter S: ";
			cin  >> s;
		}
		
		void getData() {
			cout << "Time2: " << h << ":" << m << ":" << s << endl;
		}
		
		friend void calculate();
};

void calculate() {
	T1 a;
	T2 b;
	
	int h,m,s;
	
	a.setData();
	b.setData();
	
//	m = (a.m + b.m + ((a.s + b.s)/60)) % 60;
//	h = a.h + b.h + ((a.m + b.m)/60);
//	s = (a.s + b.s)%60;

	h = a.h + b.h;
	m = a.m + b.m;
	s = a.s + b.s;
	
	while(s>=60) {
		s -= 60;
		m++;
	}
	
	while(m>=60) {
		m -= 60;
		h++;
	}
	
	a.getData();
	b.getData();
		
	cout << "Final time: " << h << ":" << m << ":" << s << endl;
}

int main() {
	calculate();
}








