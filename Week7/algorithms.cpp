//
//  algorithms.cpp
//  Starter_week8
//
//  Created by Rania Arbash on 2025-03-03.
//


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main (){
    std::vector<int> numbers = {5,2,9,7,5,3,1};// this is not an array
    // sort
    std::sort(numbers.begin(), numbers.end());// both iterators
    
    cout << " Vector's elements " << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << " ";
    }
    
    std::sort(numbers.begin(),numbers.end(),  [](int a, int b){
        return a > b;
    } );
    
    cout << " Vector's elements " << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << " ";
    }
    
    cout  <<endl << "Find A Number " << endl;
   auto it =  std::find(numbers.begin(), numbers.end(), 11);
    if (it != numbers.end()) {
        cout << *it << " " << endl;
    }else {
        cout << "Element Not Found " << endl;
    }
    
    
    // for_each
    // times by 2

    auto updatedIterator =  std::for_each(numbers.begin(), numbers.end(), [](int& a){
        a *= 2;
    });
    
    // copy all elements of a vector to another vector if the value more than 3
    
    cout << " Vector's elements - After For_each" << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it){
        cout << *it << " ";
    }
    
    std::vector<int> squarNumbers(numbers.size());// a new empty vector with the same size as numbers vectoer
    
    std::transform(numbers.begin(), numbers.end(), squarNumbers.begin(), [](int a){
        return a * a;
    });
    
    cout << " squarNumbers's elements - After transform" << endl;
    for (auto it = squarNumbers.begin(); it != squarNumbers.end(); ++it){
        cout << *it << " ";
    }
    std::vector<int> copyOfNumbers(0);// a new empty vector with the same size as numbers vectoer

    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(copyOfNumbers), [](int a) {
        return a > 4;
    });
    
    cout << endl <<" copyOfNumbers's elements - After copy_if" << endl;
    for (auto it = copyOfNumbers.begin(); it != copyOfNumbers.end(); ++it){
        cout << *it << " ";
    }
    
}
