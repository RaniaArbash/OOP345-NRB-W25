#include <iostream>
using namespace std;
#define pointer *
#define targetOf *
#define addressOf &

int year = 2025;
int value() {
	return 10;
}// lvalue or rvalue

int& value2() {
	return year;
}

int main() {

	int valueReturn = value();
	//value() = 66;// rvalue
	
	cout << year << endl;
	value2() = 2024;// lvalue
	cout << year << endl;

	/*double* dptr; 
	cout << *dptr;

	void* voidptr = dptr;*/


	int a = 9;
	int pointer intptr = addressOf a;
	cout << "A: " << a << endl;
	cout << "Target Of A " << targetOf intptr << endl;
	a++;
	cout << "A: " << a << endl;
	cout << "Target Of A " << targetOf intptr << endl;
	(targetOf intptr)++;
	cout << "A: " << a << endl;
	cout << "Target Of A " << targetOf intptr << endl;

	
	
	int myarray[] = {11,22,33,44,55,66};
	int* arrayptr = myarray;
	cout << myarray << endl;
	cout << &myarray[0] << endl;
	
	cout << myarray[4] << endl;
	cout << *(arrayptr + 4) << endl;

	arrayptr += 5;
	arrayptr -= 2;
	cout << "which one " << *arrayptr << endl;
	cout << "first " << targetOf arrayptr << endl;
	arrayptr++;
	cout <<  "second "<< targetOf arrayptr << endl;
	arrayptr++;
	cout << "third " << targetOf arrayptr << endl;



	//int a = 77;
	//int* aptr = &77;
	// 77 is not lvalue
	// 77 is rvalue



	return 0;
}