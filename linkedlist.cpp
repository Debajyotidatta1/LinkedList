#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    // static way to create this
    //  Node a1;
    //  a1.data = 1;
    //  a1.next = nullptr;

    // dynamic way
    // Node *head;
    // head = new Node();
    // head->data = 4;
    // head->next = nullptr;

    // dynamic way with constructor
    Node *head;
    head = new Node(4);

    //---------insertion
    // start insertion
    // if linkedlist does not exit and head is null
    if (head == nullptr)
    {
        head = new Node(28);
    }
    else
    {
        Node *temp;
        temp = new Node(28);
        temp->next = head;
        head = temp;
    }

    return 0;
}