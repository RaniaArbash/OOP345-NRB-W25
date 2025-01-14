//#include <iostream>
//using namespace std;
//#define intptrtype int*
//#define   ulli  unsigned long long int
//typedef int* intptr;
//
//typedef struct {
//	int a;
//	int b;
//} Student;
//
//struct s1 {
//	double a;// 8
//	char b;// 1 
//	int k;// 4
//	int c;
//};
//
//struct s2 {
//	int a;
//	char b;
//	double c;
//	double k;
//};//32
//
//struct s3 {
//	double c;
//	double k;
//	int a;
//	char b;
//};// 24
//
//// 
//int main() {
//	Student s;
//	int y = 8, t = 9; 
//	
//	int* yp, tp = 9; // only the first one is pointer, the second is int
//	// #define
//	intptrtype yptr, tptr = 9;// only the first one is pointer, the second is int
//	
//	// typedef
//	intptr y2ptr = &y, t2ptr = &t;
//
//
//	unsigned long long int aa;
//	ulli v;
//	int oct = 0133;
//
//	wchar_t k, m, n, p;
//
//	k = L'[';    // character - note the leading L
//	m = L'\133'; // octal - note the leading L'\
//	n = L'\x5b'; // hexadecimal - note the leading L'\x
//	p = L'\X5B'; // hexadecimal - note the leading L'\X
//
//	
//	wchar_t a = L'k';
//
//
//	int n0 = 7;   // C-style
//	int n1 = 7.2; // C-style - narrowing (loss of information)
//	int n2{ 6 };   // universal form braces-enclosed list
//	int n3 = { 5 }; // = is redundant
//
//	int myarray[]{ 4,3,2 };
//	int myarray1[] = { 4,3,2 };
//
//
//
//	struct s1 obj;
//	cout << "Int: " << sizeof(int) << endl;;
//	cout << "Double: " << sizeof(double) << endl;;
//	cout << "S1: " << sizeof(s1) << endl;;
//	cout << "S1: " << alignof(s1) << endl;;
//
//	
//	cout << "S2: " << sizeof(s2) << endl;;
//	cout << "S2: " << alignof(s2) << endl;;
//
//	
//	cout << "S3: " << sizeof(s3) << endl;;
//	cout << "S3: " << alignof(s3) << endl;;
//	return 0;
//
//
//
//}