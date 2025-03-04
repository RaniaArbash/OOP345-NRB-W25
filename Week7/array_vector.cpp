//
//  main.cpp
//  Starter_week8
//
//  Created by Rania Arbash on 2025-03-03.
//

#include <iostream>
#include <vector>
#include <list>
#include <queue>

int main() {
    int size = 5;
    // Manually allocating memory
    int* arr = new int[size];

    // Filling the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    // Iterating through the array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    delete[] arr;  // Releasing memory

    std::vector<int> vec = {3,2,4,2};
    for (int val : vec ) {
        std::cout << val;
    }
    
    
    
    
    return 0;
}
