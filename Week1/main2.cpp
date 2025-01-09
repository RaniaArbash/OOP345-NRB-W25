#include <iostream>
using namespace std;

#include "School.h"
#define FORLOOP for (int i = 0; i < 10; i++)
#define YEAR 2025
using namespace SDDS;
void addone();

const int add10(const int v) {
	return v + 88;
}
 void subone() {
	static int value = 0;
	value -= 1;
	cout << value << endl;
}

int main() {
	const int year = 2025;
	cout << Student::numOfStudent << endl;
	Student A, B, C;
	cout << A.numOfStudent << endl;
	A.numOfStudent++;
	cout << B.numOfStudent << endl;
	cout << C.numOfStudent << endl;
	cout << Student::numOfStudent << endl;
	static int v = 9;
	
	FORLOOP {
		addone();
		subone();
	}
	return 0;
}

void addone() {
	static int value = 0;
	value += 1;
	cout << value << endl;
}