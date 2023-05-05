#include<iostream>
using namespace std;

//Multilevel inheritence
class Admin {
	protected:
		string comp_name;
	public:
		void setName() {
			cout << "Enter company name\t: ";
			cin  >> comp_name;
		}
};

class Manager : public Admin {
	public:		
		void getName() {
			cout << "============================" << endl
				 << "CMP Name :\t " << comp_name << endl 
				 << "============================" << endl;
		}
};

class Emp : public Manager {
	private:
		int emp_id;
		string emp_name;
	public:
		void setData() {
			cout << "Enter id\t: ";
			cin  >> emp_id;
			cout << "Enter name\t: ";
			cin  >> emp_name;
		}
		
		void getData() {
			cout << "Id\t: " << emp_id << endl
				 << "Name\t: " << emp_name << endl;
		}
};

//Hierarchical
class Cricket {
	protected:
		int over = 50;
};

class T20 : public Cricket {
	public:
		void getOver() {
			cout << "Over: " << over - 30 << endl;
		}
};

class Test : public Cricket {
	public:
		void getOver() {
			cout << "Over: " << over * 9 << endl;
		}
};


//Multiple
//
//class A {
//	private: 
//		int a;
//	public:
//		void setA() {
//			cout << "Enter a: ";
//			cin  >> a;
//		}
//		
//		void getA() {
//			cout << "a: " << a << endl;
//		}
//};
//
//class B {
//	private: 
//		int b;
//	public:
//		void setB() {
//			cout << "Enter b: ";
//			cin  >> b;
//		}
//		
//		void getB() {
//			cout << "b: " << b << endl;
//		}
//};
//
//class C : public B, public A {
//	private: 
//		int c;
//	public:
//		void setC() {
//			cout << "Enter c: ";
//			cin  >> c;
//		}
//		
//		void getC() {
//			cout << "c: " << c << endl;
//		}
//};


//Hybrid
class A {
	private: 
		int a;
	public:
		void setA() {
			cout << "Enter a: ";
			cin  >> a;
		}
		
		void getA() {
			cout << "a: " << a << endl;
		}
};

//	B A
class B : public A {
	private: 
		int b;
	public:
		void setB() {
			cout << "Enter b: ";
			cin  >> b;
		}
		
		void getB() {
			cout << "b: " << b << endl;
		}
};

//	C A
class C : public A {
	private: 
		int c;
	public:
		void setC() {
			cout << "Enter c: ";
			cin  >> c;
		}
		
		void getC() {
			cout << "c: " << c << endl;
		}
};

//	B A
//	C A
//	D
class D : public B , public C {
	private: 
		int d;
	public:
		void setD() {
			cout << "Enter d: ";
			cin  >> d;
		}
		
		void getD() {
			cout << "d: " << d << endl;
		}
};

/*
		Ambiguity	(Duplication)
		
			1. using scope resolution operator		(temp)
			2. using virtual function				(perm)		
*/

int main() {
	
	D d1;
	
	d1.B::setA();
	d1.setB();
	d1.setC();
	d1.setD();
	
	d1.B::getA();
	d1.getB();
	d1.getC();
	d1.getD();
	
}






