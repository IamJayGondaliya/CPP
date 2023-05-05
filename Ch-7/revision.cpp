#include<iostream>
using namespace std;

class Product {
	private:
		int id;
		string name;
		int price;
		int quantity = 1;
		static int bill;
	public:
		void setData() {
			cout << "Enter p_id\t: ";
			cin  >> id;
			cout << "Enter p_name\t: ";
			cin  >> name;
			cout << "Enter p_price\t: ";
			cin  >> price;
		}
		static void header() {
			cout << "Id\tName\tPrice\tQty.\tAmount\n";
		}
		void getData() {
			cout << id << "\t" << name << "\t" << price << "\t" << quantity << "\t" << price * quantity << endl;
		}
		
		void addToBill() {
			bill += price * quantity;
		}
		
		static void getTotalBill() {
			cout << "===========================" << endl
				 << "Total ammount :\t\t\t" << bill << endl
				 << "===========================" << endl;
		}
		
		void operator++() {
			++quantity;
		}
		
		void operator--() {
			--quantity;
		}
};
int Product::bill = 0;

int main() {
	
	int n;
	
	cout << "Enter number of products: ";
	cin  >> n;
	
	Product p[n];
	
	for(int i=0; i<n; i++)	p[i].setData();
	
	int m;
	
	cout << "Enter the product to add quantity: ";
	cin  >> m;
	
	++p[m];
//	p[m].addQuantity();

	cout << "Enter the product to remove quantity: ";
	cin  >> m;
	--p[m];
	
	Product::header();
	for(int i=0; i<n; i++) {
		p[i].addToBill();
		p[i].getData();
	}	
	Product::getTotalBill();
	
}














