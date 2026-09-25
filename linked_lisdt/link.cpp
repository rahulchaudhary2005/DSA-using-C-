#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:

    Node* head;

    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Insert at front
    void pushFront(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;

        head = newNode;
    }

    // Insert at back
    void pushBack(int value) {

        Node* newNode = new Node(value);

        // If linked list is empty
        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Insert at a position
    void insertAtPosition(int value, int pos) {

        // Insert at front
        if(pos == 0) {
            pushFront(value);
            return;
        }

        Node* newNode = new Node(value);

        Node* temp = head;

        // Reach node before position
        for(int i=0; i<pos-1 && temp != NULL; i++) {
            temp = temp->next;
        }

        // Position is invalid
        if(temp == NULL) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;

        temp->next = newNode;
    }

    // Delete from front
    void popFront() {

        if(head == NULL) {
            cout << "Linked List is empty" << endl;
            return;
        }

        Node* temp = head;

        head = head->next;

        delete temp;
    }

    // Delete from back
    void popBack() {

        if(head == NULL) {
            cout << "Linked List is empty" << endl;
            return;
        }

        // Only one node
        if(head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        // Reach second-last node
        while(temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;

        temp->next = NULL;
    }

    // Delete node at position
    void deleteAtPosition(int pos) {

        if(head == NULL) {
            cout << "Linked List is empty" << endl;
            return;
        }

        // Delete first node
        if(pos == 0) {
            popFront();
            return;
        }

        Node* temp = head;

        // Reach node before the node to delete
        for(int i=0; i<pos-1 && temp != NULL; i++) {
            temp = temp->next;
        }

        // Invalid position
        if(temp == NULL || temp->next == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* toDelete = temp->next;

        temp->next = toDelete->next;

        delete toDelete;
    }

    // Search a value
    bool search(int value) {

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data == value) {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    // Print linked list
    void print() {

        Node* temp = head;

        while(temp != NULL) {

            cout << temp->data << " ";

            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList ll;

    // Initially empty
    ll.print();

    // Add elements at front
    ll.pushFront(30);
    ll.pushFront(20);
    ll.pushFront(10);

    ll.print();

    // Add element at back
    ll.pushBack(40);
    ll.pushBack(50);

    ll.print();

    // Insert 25 at position 2
    ll.insertAtPosition(25, 2);

    ll.print();

    // Delete first node
    ll.popFront();

    ll.print();

    // Delete last node
    ll.popBack();

    ll.print();

    // Delete node at position 1
    ll.deleteAtPosition(1);

    ll.print();

    // Search
    if(ll.search(30)) {
        cout << "30 Found" << endl;
    }
    else {
        cout << "30 Not Found" << endl;
    }

    return 0;
}