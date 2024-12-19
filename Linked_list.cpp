#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *Head = NULL;

// Insert Node
void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;

    if(Head == NULL)
    {
        Head = new_node;
        new_node->next = NULL;
    }
    else{
        last = Head;
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void DeleteNode(int value)
{
    node *current, *previous;
    current = Head;
    previous = Head;
    if(current->data == value)
    {
        Head = current->next;
        free(current);
        return;
    }
    while (current->data != value)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
}

void Display()
{
    node *current;
    if(Head == NULL)
    {
        cout<<"Linked List Is Empty\n";
    }
    else
    {
        current = Head;
        while (current != NULL)
        {
            cout<<current->data<<" ";
            current = current->next;
        }
    }
    cout<<endl;
}
int main()
{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    DeleteNode(20);
    Display();
    return 0;
}