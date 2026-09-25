#include <iostream>

using namespace std;

class Node
{
public:

    int data;
    Node* next;

    // Constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// Insert at head
void insertAtHead(Node*& head, Node*& tail, int value)
{
    Node* temp = new Node(value);

    // If linked list is empty
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(Node*& head, Node*& tail, int value)
{
    Node* temp = new Node(value);

    // If linked list is empty
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    tail->next = temp;
    tail = temp;
}
//Insert at position
void insertAtPosition(Node*& head, Node*& tail, int value, int pos)
{
    // insert at start
    if(pos == 0)
    {
        insertAtHead(head, tail, value);
        return;
    }

    Node* temp = new Node(value);
    Node* current = head;

    for(int i = 0; i < pos - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if(current == NULL)
    {
        cout << "Position out of bounds" << endl;
        delete temp;
        return;
    }

    temp->next = current->next;
    current->next = temp;

    // If inserted at the end
    if(temp->next == NULL)
    {
        tail = temp;
    }
}

// Delete node from the front 
void pop_front(Node*& head, Node*& tail)
{
    if(head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;

    // If the list becomes empty after deletion
    if(head == NULL)
    {
        tail = NULL;
    }
}

//Delete the node from the last 
void delete_last(Node*& head, Node*& tail)
{
    if(head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    Node* temp;
    temp = head;;
    while(temp->next  !=tail)
    {
        temp=temp->next;


    }
    temp->next=NULL;
    delete tail;
    tail=temp;

}

// Print the linked list
void printLL(Node*& head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << "->";

        temp = temp->next;
    }

    cout << "NULL";
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    // Print the linked list
    printLL(head);

    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    printLL(head);
    cout<<"The linked list after inserting at position 2 is: ";
    insertAtPosition(head, tail, 25, 2);
    printLL(head);

    cout<<"The linked list after deleting the first node is: ";
    pop_front(head, tail);
    printLL(head);

    cout<<"The linked list after deleting the last node is: ";
    delete_last(head, tail);
    printLL(head);


    return 0;
}