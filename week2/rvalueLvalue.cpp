#include <iostream>
using namespace std;

double tax = 0.7;
int value() {
	return 10;
}

double& taxValue() {
	return tax;
}

void foo(int& a) {
	a = 234;
	cout << "Lvalue " << a << endl;
}
void foo(int&& a) {
	a = 234;
	cout << "Rvalue " << a << endl;
}
int main() {
	int i;
	int* p = &i;// lvalue
	//p = &67;
	cout << 67 << endl;
	i = value();
	//value() = 20;
	taxValue() = 0.13;
	cout << tax; 
	foo(500);
	foo(i);



	return 0;


}