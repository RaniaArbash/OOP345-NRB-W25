//
//  main2.cpp
//  Week11
//
//  Created by Rania Arbash on 2025-03-24.
//


#include <iostream>

using namespace std;

void print1DArray (int value[], int size){
    for (int i = 0 ;i < size ; i++){
            cout << value[i] << " ";
    }
    cout << endl;
}
void print1DArrayWithAddress (int* value, int size){
    for (int i = 0 ;i < size ; i++){
        cout << value[i] << " " <<  *(value + i)<< " ";
    }
    cout << endl;
}

void print2DArray (int value [][5], int size){
    for (int i = 0 ;i < size ; i++){
        for (int j = 0 ; j < 5; j++){
            cout << value[i][j] << " ";
        }
        cout << endl;
    }
}

void print2DArrayWithAddress (int (*value)[5], int size){
    for (int i = 0 ;i < size ; i++){
        for (int j = 0 ; j < 5; j++){
            cout << value[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    
    int array1D[] = {11,22,33};
    int* array1Dptr = array1D;
    
    for (int i = 0 ;i< 3; i++)
        cout << array1D[i] << " " ;// 11 22 33
    cout << endl;
    
    for (int i = 0 ;i< 3; i++)
        cout << *(array1Dptr + i) << "" << endl; //11  22  33
    cout << endl;
    
    //const int* array2Dptr const ;
    int array2D[2][5] = {
                        {11,22,33, 44,55} ,
                        {66,77,88, 99, 100}
                        };
    
    
    int (*ptr)[5] = array2D; // a pointer to 2D array of integers
    int* ptr2 [5] ; // array of 5 integer pointer
    
    
    for (int i = 0 ;i < 2 ; i++){
        for (int j = 0 ; j < 5; j++){
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int* array2Dptr = (int*)array2D;
    
    
    
    
    for (int i = 0 ;i < 10 ; i++){
        cout << *(array2Dptr + i) << " ";
    }
    
    cout << endl;
    
    cout << (uintptr_t)array2D <<  "  "<<(uintptr_t)array2Dptr << endl;
    cout << (uintptr_t)(array2D + 1 )  <<  "  "<<(uintptr_t)(array2Dptr + 1) << endl;


    
    
    
    return 0;
}
