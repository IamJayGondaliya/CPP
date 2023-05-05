#include<iostream>
using namespace std;

/*
		Friend function:
*/

class Time2;

class Time1 {
	private:
		int h,m;
	public:
		//setter
		void setData() {
			cout << "Enter minute\t: ";
			cin  >> m;
			cout << "Enter hour\t: ";
			cin  >> h;
		}
		
		friend void calculate(Time1,Time2);		
};

class Time2 {
	private:
		int h,m;
	public:
		//setter
		void setData() {
			cout << "Enter minute\t: ";
			cin  >> m;
			cout << "Enter hour\t: ";
			cin  >> h;
		}
		
		friend void calculate(Time1,Time2);		
};

void calculate(Time1 a,Time2 b) {
	
	int h,m;
	
	h = a.h + b.h;
	m = a.m + b.m;
	
	while(m>59) {
		m -= 60;
		h++;
	}
	
	cout << "Time: " << h << ":" << m << endl;
}

int main() {
	
	Time1 t1;
	Time2 t2;
	
	t1.setData();
	t2.setData();
	
	calculate(t1,t2);
	
}













