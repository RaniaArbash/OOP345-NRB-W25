//
//  main.cpp
//  Week4Project
//
//  Created by Rania Arbash on 2025-01-27.
//

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    long id ;
    int yob ;
    Student(){
        name ="";
        id = 0;
        yob = 0;
    }
    Student(string n, long i, int y) :name(n) , id(i), yob(y) {}
};


class ProgrammingClass {
    Student* allstudents {};// dynamic
    int size {0};
public:
    ProgrammingClass() = default;
    ProgrammingClass(ProgrammingClass& copy){// copy constructor
        delete[] allstudents;
        allstudents = new Student[copy.size];
        size = copy.size;
        for (int i = 0 ;i < size; i++){
            allstudents[i] = copy.allstudents[i];
        }
    }
    
    ProgrammingClass& operator=(ProgrammingClass& copy) {// copy assignment operator overload
        if ( this != &copy ){//
            delete[] allstudents;
            allstudents = new Student[copy.size];
            size = copy.size;
            for (int i = 0 ;i < size; i++){
                allstudents[i] = copy.allstudents[i];
            }
        }
        return *this;
    }
    ProgrammingClass& operator=(ProgrammingClass&& move){
        if ( this != &move ){//
            size = move.size;
            allstudents = move.allstudents;
            
            move.allstudents = nullptr;
            move.size = 0;
        }
        return *this;
    }
    
    
    ProgrammingClass(ProgrammingClass&& moveFromObj){ // move constructor
        
        size = moveFromObj.size;
        allstudents = moveFromObj.allstudents;
    
        moveFromObj.allstudents = nullptr;
        moveFromObj.size = 0;
    }
    ProgrammingClass(const char* filename){
        
        fstream myfile(filename);//create a connection with my file
        if (myfile.is_open()){
            int counter = 0;
            std::string line;
            while (getline(myfile, line))// getline will stop when reach EOF
                counter++;
            
            size = counter;
            allstudents = new Student[counter];
            myfile.clear();
            myfile.seekg(ios::beg);
            
            int i = 0;
            for (i = 0 ; i< counter; i++){
                // the real reading from the file
                getline(myfile, allstudents[i].name, ',');
               
                string idFromTheFile;
                getline(myfile,idFromTheFile, ',' );
                allstudents[i].id = stol(idFromTheFile);
                
                string yearFromTheFile;
                getline(myfile, yearFromTheFile);
                allstudents[i].yob = stoi(yearFromTheFile);
                
            }
            
            myfile.clear();
            
    
        }else {
            cout << "The file can't be open" << endl;
        }
    }
    
    void displayAllStudents(){
        if (allstudents){
            //
            for (int i = 0 ; i< size ; i++){
                cout << allstudents[i].name << " - " << allstudents[i].id << " "<< allstudents[i].yob<< endl;
            }
        }else {
            cout << "No Data In this Object " << endl;
        }
        
    }
    ~ProgrammingClass(){
        delete[] allstudents;
    }
    // resizing
    
    void addNewStudent(Student s){
        // add this s to allStudents
        Student* temp = new Student[size + 1];
        int i = 0;
        for ( i = 0 ; i< size;i++){
            temp[i] = allstudents[i];
        }
        temp[i] = s;
        
        delete[] allstudents;
        allstudents = temp;// shallow copy
        size += 1;
        
    }
};

int main(){
    
    ProgrammingClass oop345("/Users/rania/Desktop/OOP/2251 Semester/Week4Project/Week4Project/oop345_info.csv");
    oop345.displayAllStudents();
    cout << "---------------After Resizing ----------------" << endl;

    
    oop345.addNewStudent(Student("John Lee", 22881199, 2000));
    oop345.displayAllStudents();

    
    
    cout << "---------------Copy Constructor ----------------" << endl;
    ProgrammingClass aps145 = oop345;// 1 mark to your quiz
    // two objects pointing to the same resouces
    aps145.displayAllStudents();
    
    ProgrammingClass myNewAPSclass = std::move(aps145);// move constructor
    aps145.displayAllStudents();
    myNewAPSclass.displayAllStudents();
    
    return  0;
}


