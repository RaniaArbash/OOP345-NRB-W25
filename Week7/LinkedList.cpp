//
//  LinkedList.cpp
//  Starter_week8
//
//  Created by Rania Arbash on 2025-03-03.
//
#include <iostream>
#include <list>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }

    ~LinkedList() {  // Manual memory cleanup
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;// pointer to one node (head)
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();

    std::cout << "The new List "<< std::endl;
    
    std::list<int> mylist = {20,30,40};
    
    for (int num : mylist){
        std::cout << num << "  ";
    }
    
    return 0;

}
