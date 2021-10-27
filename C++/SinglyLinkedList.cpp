#include<iostream>
using namespace std;

///Here we are creating a Node for Linked List
class Node
{
public:
    int Data;
    Node* next;

    Node(int val) : head(NULL), tail(NULL)
    {
        Data=val;
        next=NULL;
    }

private:
    int* head;
    int * tail;
    
};

///Here we are inserting a node at the End of the Linked List.
Node::void InsertAtTail(Node* &head,int value)
{

    Node* n=new Node(value);

    if(head==NULL)
    {
        head=n;
        return;
    }
    else
    {
        Node *temp =head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;

    }
}

///Here we are inserting node at the start of linked list.
Node::void InsertAtHead(Node* &head,int value)
{
    Node* n=new Node(value);

    n->next=head;
    head=n;
}

///Here we are displaying the whole linked list.
Node::void Display(Node* head)
{
    Node* n=head;
    while(n!=NULL)
    {
        cout<<n->Data<<"->";
        n=n->next;
    }
    cout<<"NULL"<<endl;

}

///Here we are searching for a particular element in the linked list.
Node::bool Search(Node* head,int Value)
{
    Node* n=head;
    while(n->next!=NULL)
    {
        if(n->Data==Value)
            return true;
        n=n->next;
    }
    return false;

}

int main()
{
    Node *head=NULL;

    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    Display(head);
    InsertAtHead(head,0);
    InsertAtHead(head,9);
    Display(head);
    cout<<Search(head,4)<<endl;;
    cout<<Search(head,10)<<endl;
}
