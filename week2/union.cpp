#include <iostream>
using namespace std;


union Vars{
	double a;// 8
   int b;// 8
   char c[8];// 8
};

int main() {

	cout << sizeof(Vars) << endl;
	cout << alignof(Vars) << endl;
	Vars v;

	cout << unsigned(&v.a) << endl;
	cout << unsigned(&v.b) << endl;
	cout << unsigned(&v.c) << endl;


	v.a = 123344.5;
	cout <<"a: " << v.a << endl;
	cout <<"b: " << v.b << endl;
	cout << "c: " << v.c << endl;
	
	v.b = 12;
	cout << "a: " << v.a << endl;
	cout << "b: " << v.b << endl;
	cout << "c: " << v.c << endl;

	for (int i = 0; i < 8; i++) {
		v.c[i] = 'A' + i;
	}
	cout << "a: " << v.a << endl;
	cout << "b: " << v.b << endl;
	cout << "c: " << v.c << endl;
}

