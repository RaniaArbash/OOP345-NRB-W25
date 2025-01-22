#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>


class Name {
private:
  
    char* m_value;//  = nullptr; // could have had it here
public:
    Name(const char* value = nullptr) :m_value(nullptr)  {
        if (value) {
            cout << "In Name Constructor " << endl;
            m_value = new char[strlen(value)+1];  // allocate size then size-=1       
            strcpy(m_value, value);
        }
    }
    Name(Name& n) {// copy constructor
        cout << "In Name Copy Constructor " << endl;
        operator=(n);
    }
    Name(Name&& n) {// move constructor
        cout << "In Name Move Constructor " << endl;
        operator=(move(n));
    }
    Name& operator=(Name&& tocopyFrom) {// Rvalue == move means having one object 
        if (this != &tocopyFrom) {// no self copy
            m_value = tocopyFrom.m_value;
            tocopyFrom.m_value = nullptr;
        }
        return *this;
    }
    Name& operator=(Name& tocopyFrom) {// Lvalue == copy means having two objects 
        
        if (this != &tocopyFrom) {// no self copy
            cout << "In copy assignment " << endl;
            m_value = new char[strlen(tocopyFrom.m_value) + 1];
            strcpy(m_value, tocopyFrom.m_value);
            
        }
        return *this;
    }
    // 4 
   
    ostream& print(ostream& os)const {
        if (m_value) 
            os << m_value;
        return os;
    }
    ~Name() {
        if (m_value) {
            cout << "In destructor deleting  " << m_value << endl;
            delete[] m_value;
        }
    }
};
ostream& operator<< (ostream& os, const Name& N) {
    cout << "Lvalue " << endl;
  return  N.print(os);
}

ostream& operator<< (ostream& os, const Name&& N) {
    cout << "Rvalue " << endl;
    return  N.print(os);
}

Name getName() {
    Name m("LoLO");
    return m;
}

int main() {

    Name n("Mary");
    Name myname("Rania");
  
    Name newName = move(myname);

    cout << n;
    cout << myname;
   
    myname =  move(n);
    cout << Name("John") << endl;// rvalue
    cout << getName() << endl;// rvalue


    int a[]{ 1, 2, 3, 4, 5, 6 };
    for (int i = 0; i < 6; i++) {
        cout << a[i] <<endl;
    }
    int a{ 9 };
    int myarray[]{ 3,4,5,6 };

    for (auto& e : a) {
        std::cout << unsigned(&e) << ": " << e << endl;
    }



}