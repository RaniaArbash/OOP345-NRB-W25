#include <iostream>
using namespace std;



int divide(int a, int b)  {
   return a / b;
}
int times(int a, int b)  {
   return a * b;
}
int sub(int a, int b)  {
   return a - b;
}
int addition(int a, int b){
    return a + b;
}
//auto add(int a, int b) -> int {
//   return a + b;
//}

template<typename A, typename B>
auto add(A a, B b) -> decltype(a + b) {
   return a + b;
}

static void display (){
    cout << "Only in this module " ;
}

void display2 (){
    static int value = 0;
    value++;
    int nonstatic = 0;
    cout << "Every where in this project" ;
}///

// dall 20 = dall 19 + 1 cm
int nestingDall(int size){
    if (size == 1){
        cout << "Building dall size 1" << endl;
        return 1;
    }else
    {
        cout << "Building dall size:" << size << endl;
        return 1 + nestingDall(size - 1);
    }
}


int fact(int a) {
    if (a == 1 )
        return 1;
    else
        return a * fact(a - 1);
}
// call 1- 5 * fact(4) //////  5 * 24 =
// call 2- 4 * fact(3)       ..... 4 * 6 = 24
// call 3 - 3 * fact(2)  --------- 3 * 2 = 6
// call 4 - 2 * fact(1)      ------ 2 * 1 = 2
// call 5 - return 1
// recersive function to revirse a string

// Hello


auto main()->int {
    
    int v = 90;
    int k = 60;
    //int result =  math(v,k);
    int* vptr = &v;
    int* kptr = &k;
    int* intptrarray[] = {vptr,kptr};
    
    
    
    
    int (*func)(int,int) = addition;
    func = sub;
    func = times;
    func = divide;
    char op;
    
    int (*funcarray[])(int,int) = {addition, sub, times, divide};
    
    for (int i = 0;i < 4; i++){
       cout <<  funcarray[i](v,k) << endl;
    }
    
    cout << "Enter the operator" << endl;
    cin >> op;
    if (op == 'a'){
        func = addition;
    }else if (op == 's'){
        func = sub;
    }
    
    func(v,k);

    cout << func(33,44);
    
    
    nestingDall(3);
    
    
    cout << fact (5);
    
    
   int x = 10;
   int y = 20;
   int z;
   z = add(x, y);
   cout << z << endl;
   return 0;
}
