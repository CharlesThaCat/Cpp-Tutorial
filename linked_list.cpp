#include <iostream>

using namespace std;

// definition of Node
struct Node
{
    int x;
    Node *next;
};

int main()
{
    Node *root;         // root node. This won't change, or we would lose the list in memory
    Node *conductor;    // conductor node. This will point to each node as it traverses.
    root = new Node;    // set the root node point to something.
    root->next = 0;     
    root->x = 5;
    conductor = root;   // conductor node points to the first node.
    
    // create a new node at the end of the linked list
    conductor->next = new Node;
    conductor = conductor->next;    //points to that node
    conductor->next = 0;
    conductor->x = 42;

    // create another new node at the end of the linked list
    conductor->next = new Node;
    conductor = conductor->next;    //points to that node
    conductor->next = 0;
    conductor->x = 88;

    // traverse the linked list
    conductor = root;   // set the conductor node back to the beginning of the linked list (root node)
    while(conductor != NULL){
        cout << conductor->x << " ";
        conductor = conductor->next;
    }
    

    
}

