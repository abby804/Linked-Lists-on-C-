#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node* prev;
    Node* next;
};

int main()
{
    // Create existing nodes
    Node* n1 = new Node{10, NULL, NULL};
    Node* n2 = new Node{20, NULL, NULL};
    Node* n3 = new Node{30, NULL, NULL};

    Node* head = n1;

    // Connect nodes
    n1->next = n2;

    n2->prev = n1;
    n2->next = n3;

    n3->prev = n2;

    // Create new node
    Node* newNode = new Node;

    cout << "Enter item to insert: ";
    cin >> newNode->info;

    // Insertion at beginning
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
    {
        head->prev = newNode;
    }

    head = newNode;

    // Display list
    Node* temp = head;

    cout << "After insertion: ";

    while(temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    return 0;
}
