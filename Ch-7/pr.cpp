#include<iostream>
using namespace std;

class Demo {
	private:
		string data;
	public:
		Demo(string str) {
			data = str;
		}
		
		void print() {
			cout << data << endl;
		}
		
		void print(string msg) {
			cout << data << " " << msg << endl;
		}
};

int main() {
	
	Demo d("Hello");
	
	d.print();
	d.print("World !!");
	
}
