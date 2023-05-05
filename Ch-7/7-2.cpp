#include<iostream>
using namespace std;

/*
		Operator Overloading :
		
			- Operators also used to invoke a method from object named 'operator'
			
			- It can be of two types:
			
				a++			++a
			
				- unary		++, --
				- binary	+, -, *, /, %, >, <, &, |, ....
*/

class Demo {
	private:
		int a;
	public:		
		Demo() {
		}
		
		Demo(int a) {
			this->a = a;
		}
		
		void getData() {
			cout << "a: " << a << endl;
		}
		
		//Post increment
		Demo operator++(int i) {
			Demo temp;			
			temp.a = a++;			
			return temp;			
		}
		
		//Pre increment
		Demo operator++() {
			Demo temp;			
			temp.a = ++a;			
			return temp;			
		}
		
		//Binary plus
		Demo operator+(Demo d) {
			Demo temp;
			temp.a = a + d.a;
			return temp;
		}
		
		Demo operator*(Demo d) {
			Demo tmp;
			tmp.a = a * d.a;
			return tmp;
		}
		
};

int main() {	
	Demo d1(5);
	Demo d2(15);
	Demo d3;
	
//	d3 = d1 + d2;	// 	d1.operator+(d2)
	d3 = d1 * d2;	// 	d1.operator*(d2)
	
	//Post	
//	Demo d2 = d1++;	//  d2 = d1 + 1;	=>  d1.operator++(1)

	//Pre
//	Demo d2 = ++d1; //  d2 = 1 + d1;	=>  d1.operator++()
	
	d1.getData();
	d2.getData();
	d3.getData()	;
}

