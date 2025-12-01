#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
private:
    Node* head; 
public:
    LinkedList() {
        head = nullptr;
    }   
    void  
    insertAtFirst(int value){
        Node * newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};
int main() {
    LinkedList list;
    list.insertAtFirst(10);
    list.insertAtFirst(20);
    list.insertAtFirst(30);
    list.display(); // Output: 30 -> 20 -> 10 -> nullptr
    return 0;
}