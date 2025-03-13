//
//  main.cpp
//  Week9-StarterCode-March10
//
//  Created by Rania Arbash on 2025-03-10.
//
//
#include <iostream>
#include <fstream>
#include <vector>
#include "Employee.h"
using namespace std;

bool shwoRec(int recordNumb, ifstream& f){
    Employee e;
    f.clear();//
    f.seekg(0);//g for get; seekp  == for put
    int i  = 0;
    for (i = 0; f && i < recordNumb ; i++){
        f >> e;// counting till one record before the one I want
    }
    if (f) {
        cout << i << e;
    } else {
        cout << "The record is not found " << endl;
    }
    return (bool)f;
}
// I need to read elemnt 10 == seekg element 9 then read
bool shwoRecInBin(int record, ifstream& f ){
    Employee e;
    f.clear();//
    f.seekg(std::streampos(record - 1)* sizeof(Employee));
    f.read((char*)&e, sizeof(Employee));// I am reading the correct record
    if (f){
        cout << record << ": " << e << endl;
    }else {
        cout << "The record is not found " << endl;

    }
    return (bool)f;
    
}

int main() {
   vector<Employee> E = {
     {12345.67,10235,"Homer Simpson"},
     {23456.89,11236,"Ned Flanders"},
     {34567.9,12495,"Waylon Smithers"},
     {45678,13795,"Lenny Leonard"},
     {56789.1,14236,"Edna Krabappel"},
     {97453.25,15888,"Barry Mackleberry"},
     {512526.32,16852,"Charles Montgomery Burns"},
     {25364.25,17526,"Larry Burns"},
     {12365.32,18369,"Carl Carlson"},
     {12586.25,19485,"Chip Davis"},
     {12893.25,20159,"Joey Crusher"},
     {12369.33,21478,"Jack Marley"},
     {48963.55,22458,"Robert Marlow"},
     {78952.33,23584,"Eugene Fisk"},
     {19379.44,24896,"Mindy Simmons"},
     {12369.55,25789,"Frank Grimes"},
     {79356.33,26741,"Wayne Slater"},
     {82269.55,27596,"Herbert Powell"},
     {16982.22,28456,"Hans Moleman"},
   };
  /// write the vector to a text file

//    ofstream file("employee.txt");
//    // write function for binary
//    // << operator for text
//    for (auto& i: E) {
//        file << i << endl;/// to read again easily
//    }

    
    /// read from the file and print to screen
    /// search and display one record from the file

//    ifstream file("employee.txt");
//    // read from binary -- read function
//    // read from text -- >>
//    Employee e;
//    int i = 0;
//    while (file >> e) {// fail
//        cout << (++i) << " : " << e << endl;
//    }
//    
//    shwoRec(10, file);
//    shwoRec(100, file);
    ///
    ///

    /// write employee vector to binary file
    
//    ofstream binFile("empbin.bin", ios::binary);
//    for (auto &i : E){
//        binFile.write((const char*)&i, sizeof(Employee));
//    }
    
    /// // read from binary file, display on screen and show one record:
    int counter = 0;
    Employee efromFile;
    
    ifstream binFile("empbin.bin", ios::binary);
    while (binFile.read( (char*)&efromFile , sizeof(Employee))){
        cout << ++counter << ": " << efromFile << endl;
    }
    
    // show one record from binary file
    
    shwoRecInBin(10, binFile);
    shwoRecInBin(100, binFile);
    

    
   return 0;
}
