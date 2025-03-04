//
//  iterator.cpp
//  Starter_week8
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Iterating using raw pointers
    int* ptr = arr;
    cout << *ptr;
    
    for (int i = 0; i < size; ++i) {
        std::cout << *(ptr + i) << " ";
    }

    std::vector<int> vec = {3,2,4,2};
    for (int val : vec ) {// for _ loop
           std::cout << val;
       }
    
   
    auto it = vec.begin() + 2;
    cout << "the element is "<< *it << endl;
   // vec.insert(it, 10);
    vec.insert(it, {60,60,60});
    
    // 3, 2, 60, 60 , 60, 4, 2
    auto toremoveIterator = vec.begin() + 1;
    vec.erase(toremoveIterator);
    
    
       
    // // 3, 60, 60 , 60, 4, 2
    // remove all elements between 3 and 5
    vec.erase(vec.begin() + 3, vec.begin() + 6); // delete in range
    
    
    cout << " Vector's elements " << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it){
        cout << *it << " ";
    }
    
    
    
    return 0;
}
