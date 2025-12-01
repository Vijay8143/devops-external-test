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
    insertAtEnd(int value){
        Node * newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
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
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display(); // Output: 10 -> 20 -> 30 -> nullptr
    return 0;
}