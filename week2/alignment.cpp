//#include <iostream>
//using namespace std;
//
//struct foo1 {  // sorted descending to save space 27bytes 
//	double a;// 8
//	double b;//8
//	double c;//8
//	int i;// 4 + 1 for ch + 3 for k
//	char ch;
//	char k[3]; // fills the fragment.
//};
//struct foo2 {  // not sorted occupies more space 27bytes
//	double a;//8
//	char ch;//8
//	double b;//8
//	int i;//8
//	double c;//8
//	char k;//8
//	// 6 * 8 = 48
//};
//int main() {
//
//
//
//	cout << sizeof(foo1) << endl;
//	cout << sizeof(foo2) << endl;
//	cout << alignof(foo1) << endl;
//	cout << alignof(foo2) << endl;
//
//
//}
//
//
